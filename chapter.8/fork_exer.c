/*
 * =====================================================================================
 *
 *       Filename:  fork_exer.c
 *
 *    Description:  P526 exercise 8.14
 *
 *        Version:  1.0
 *        Created:  10/09/2015 08:25:21 PM
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

void doit()
{
	if (fork() == 0) {
		fork();
		printf("1 - hello!\n");
#if 0
		exit(0);
#else
		return ;
#endif
	}
	return ;
}

int main()
{
	doit();
	printf("2 - hello!\n");

	exit(0);
}
