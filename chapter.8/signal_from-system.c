/*
 * =====================================================================================
 *
 *       Filename:  signal_from-system.c
 *
 *    Description:  This program is to show that a signal can be from system implicitly.
 *
 *        Version:  1.0
 *        Created:  10/09/2015 11:14:30 AM
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

void handler(int sig)
{
	printf("Get a signal - %d from system!\n", sig);
	exit(0);
}

int main ()
{
	int a = 2;
	int b = 0;

	signal(SIGFPE, handler);

	a = a / b;

	return 0;
}
