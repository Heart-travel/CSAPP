/*
 * =====================================================================================
 *
 *       Filename:  endian.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/06/2015 08:46:38 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

void main()
{
	int i = 0xff;

	unsigned char *j;

	j = (unsigned char *)&i;
	if (*j & 0xff)
		printf("The machine is little endian.\n");
	else
		printf("The machine is big endian.\n");
}
