/*
 * GetLargest.c
 *
 *  Created on: May 1, 2022
 *      Author: JUMBO
 */


#include <stdio.h>

void main()
{
	int x1,x2,x3;

	printf("Enter a number : ");
	fflush(stdout);
	scanf("%d",&x1);

	printf("Enter a number : ");
	fflush(stdout);
	scanf("%d",&x2);

	printf("Enter a number : ");
	fflush(stdout);
	scanf("%d",&x3);


	if(x1>x2 && x1>x3)
		printf("Largest num : %d",x1);
	else if(x2>x1 && x2>x3)
		printf("Largest num : %d",x2);
	else
		printf("Largest num : %d",x3);
}
