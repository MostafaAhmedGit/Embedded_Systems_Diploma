/*
 * SwappingWithoutTemp.c
 *
 *  Created on: Apr 30, 2022
 *      Author: JUMBO
 */

#include <stdio.h>
void main()
{
	int x,y;

	printf("Enter a value for X : ");
	fflush(stdout);
	scanf("%d",&x);
	printf("Enter a value for Y : ");
	fflush(stdout);
	scanf("%d",&y);

	x = x+y;
	y = x-y;
	x = x-y;
	printf("Value of X : %d\n",x);
	printf("Value of Y : %d ",y);
}
