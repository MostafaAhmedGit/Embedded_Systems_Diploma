/*
 * SumofNatural.c
 *
 *  Created on: May 1, 2022
 *      Author: JUMBO
 */
#include <stdio.h>

void main()
{
	int x,sum=0,i;
	printf("Enter a number : ");
	fflush(stdout);
	scanf("%d",&x);

	for(i=1;i<=x;i++)
	{
		sum+=i;
	}

	printf("%d",sum);

}

