/*
 * =====================================================================================
 *
 *       Filename:  uadd.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/06/2015 08:00:56 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int num2bit(unsigned num)
{
	int ret = 0;
	int i = 0;

	for (i = 0; i < 4*sizeof(num); i++) {
		if (num & (1 << i))
			ret++;
	}
	
	printf("The sum bits of num is %d\n", ret);
	return ret;
}

int uadd_ok(unsigned x, unsigned y)
{
	return (((num2bit(x)+num2bit(y)) > 32) ? 0 : 1);
}

void main()
{
	int a = 3947483647;
	int b = 3929933123;

	if (uadd_ok(a, b))
		printf("Add OK\n");
	else
		printf("Add Overflow\n");
}
