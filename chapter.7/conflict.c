/*
 * =====================================================================================
 *
 *       Filename:  conflict.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/12/2015 09:06:31 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include "func.h"

void f(void);

int x = 15313;
int y = 15212;

int main()
{
	f();
	printf("x = 0x%x, y = 0x%x\n", x, y);

	return 0;
}
