/*
 * fourth.c
 *
 *  Created on: Apr 30, 2022
 *      Author: JUMBO
 */
#include <stdio.h>

void main()
{
	float x,y;

	printf("Enter a decimal number : ");
	fflush(stdout);
	scanf("%f",&x);
	printf("Enter a decimal number : ");
	fflush(stdout);
	scanf("%f",&y);
	printf("%.2f",x*y);

}

