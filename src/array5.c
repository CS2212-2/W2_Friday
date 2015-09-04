/*
 * array5.c
 *
 *  Created on: Sep 3, 2015
 *      Author: root
 */


#include<stdio.h>

int main18()
{
	int a[4][4], i , j;

	for (i = 0; i < 4; i++)
	{
		for ( j = 0; j < 4; j++)
		{
			a[i][j] = 0;
			printf("a[%d][%d] = %d \n", i, j, a[i][j]);
		}
	}
	return 0;
}
