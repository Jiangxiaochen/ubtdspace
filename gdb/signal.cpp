#include <stdio.h>
#include <unistd.h>
#include <signal.h>
void handler(int sig);
void handler(int sig)
{
signal(sig, handler);
printf("Receive signal: %d\n", sig);
}
 int main(void) {
signal(SIGINT, handler);
signal(SIGALRM, handler);
while (1)
{
sleep(1);
}
return 0;
}
