/*
 * CheckPositiveOrNegative.c
 *
 *  Created on: May 1, 2022
 *      Author: JUMBO
 */

#include <stdio.h>
void main()
{
	int x;
	printf("Enter a number : ");
	fflush(stdout);
	scanf("%d",&x);
	if(x>0)
		printf("+ve num");
	else if(x<0)
		printf("-ve num");
}
