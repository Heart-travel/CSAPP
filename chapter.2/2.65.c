/*
 * =====================================================================================
 *
 *       Filename:  2.65.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/06/2015 08:53:08 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int even_ones(unsigned x)
{
	int i = 0;
	int ret = 0;

	for (i = 0; i < sizeof(unsigned); i++) {
		if (x & (1 << i))
			ret++;
	}

	printf("ret = %d\n", ret);
	return !(ret%2);
}

void main()
{
	int num;
	int i;
	printf("Please enter the test number:\n");
	scanf("%d", &num);

	i = even_ones(num);
	printf("The number \"%d\" contain ",num);
	printf(i ? "even ":"odd ");
	printf("ones.\n");
}
