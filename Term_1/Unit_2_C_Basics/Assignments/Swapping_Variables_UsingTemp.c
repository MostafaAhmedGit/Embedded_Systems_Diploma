/*
 * sixth.c
 *
 *  Created on: Apr 30, 2022
 *      Author: JUMBO
 */
#include <stdio.h>

void main()
{
	int x,y,temp;
	printf("Enter a number for X : ");
	fflush(stdout);
	scanf("%d",&x);
	printf("Enter a number for Y : ");
	fflush(stdout);
	scanf("%d",&y);

	temp = x;
	x = y;
	y = temp;

	printf("Value of X : %d\n",x);
	printf("Value of Y : %d",y);

}

