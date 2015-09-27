#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void handler()
{
	printf("Caught SIGINT!\n");
	exit(0);
}

int main()
{
	if(signal(SIGUSR1, handler) == SIG_ERR)
		printf("signal error.\n");

	pause();

	exit(0);
}

