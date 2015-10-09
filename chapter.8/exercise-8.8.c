/*
 * =====================================================================================
 *
 *       Filename:  exercise-8.8.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/09/2015 11:37:24 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

pid_t pid;
int counter = 2;

void handler1()
{
	counter -= 1 ;
	printf("%d", counter);

	fflush(stdout);
	exit(0);
}

int main()
{
	signal(SIGUSR1, handler1);

	printf("%d", counter);
	fflush(stdout);

	if ((pid = fork()) == 0)
		while(1);

	kill(pid, SIGUSR1);
	waitpid(-1, NULL, 0);
	counter += 1;
	printf("%d", counter);
	exit(0);
}
