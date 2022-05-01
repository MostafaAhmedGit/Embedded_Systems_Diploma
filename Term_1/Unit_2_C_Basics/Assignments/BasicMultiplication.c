/*
 * awl.c
 *
 *  Created on: Apr 30, 2022
 *      Author: Mostafa Ahmed
 */


#include <stdio.h>

void main()
{
	int x,y;

	printf("Enter a number : ");
	fflush(stdout);
	scanf("%d",&x);
	printf("Enter a number : ");
	fflush(stdout);
	scanf("%d",&y);
	printf("Sum : %d",x+y);

}
