/*
 * CheckEvenorOdd.c
 *
 *  Created on: Apr 30, 2022
 *      Author: JUMBO
 */

#include <stdio.h>

void main()
{
	int x;
	printf("Please enter a number : ");
	fflush(stdout);
	scanf("%d",&x);

	if(x%2==0)
		printf("The number you entered is %d is Even",x);
	else
		printf("The number you entered is %d is Odd",x);
}
