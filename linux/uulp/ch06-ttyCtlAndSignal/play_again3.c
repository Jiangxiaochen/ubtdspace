#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <termios.h>

#define TRIES 3
#define SLEEPTIME 2
#define BEEP putchar('\a')	//aler user
#define QUESTION "Do you want another transaction"
int get_response(char *);
int get_ok_char();

int main()
{
	int response;
	tty_mode(0);	//save tty mode
	//set_crmode();	//set chr-by-chr mode
	set_cr_noecho_mode();
	set_nodelay_mode();
	response = get_response(QUESTION);
	tty_mode(1);	//restore tty mode
	return response;
}
int get_ok_char()
{
	int c;
	while((c = getchar()) != EOF && strchr("yYnN", c) == NULL);
	return c;
}
int get_response(char *question)
{
	int input;
	int maxtries = 3;
	printf("%s (y/n)?", question);
	while(1){
		sleep(SLEEPTIME);
		input = tolower(get_ok_char());
		if(input == 'y') return 0;
		if(input == 'n') return 1;
		if(maxtries-- == 0) return 2;
		BEEP;
	}
}
		
void set_crmode()
{
	struct termios ttystate;
	tcgetattr(0, &ttystate);	//read curr settings
	ttystate.c_lflag &= ~ICANON;	//no buffering
	ttystate.c_cc[VMIN]	= 1;	//get 1 char at a time
	tcsetattr(0, TCSANOW, &ttystate);	//install settings
}

void set_cr_noecho_mode()
{
	struct termios ttystate;
	tcgetattr(0, &ttystate);
	ttystate.c_lflag &= ~ICANON;
	ttystate.c_lflag &= ~ECHO;
	ttystate.c_cc[VMIN] = 1;
	tcsetattr(0, TCSANOW, &ttystate);
}

void set_nodelay_mode()
{
	int termflags;
	termflags = fcntl(0, F_GETFL);
	termflags |= O_NDELAY;
	fcntl(0, F_SETFL, termflags);
}

void tty_mode(int how)
{
	static struct termios original_mode;
	if(how == 0) tcgetattr(0, &original_mode);
	else return tcsetattr(0, TCSANOW, &original_mode);
}












