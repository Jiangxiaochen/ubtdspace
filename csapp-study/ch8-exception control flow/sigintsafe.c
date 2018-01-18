#include <csapp.h>

void sigint_handler(int sig){
	Sio_puts("caught sigint\n");
	_exit(0);
}

int main(int argc, char const *argv[])
{
	sigint_handler(100);
	return 0;
}