/*
 * Calculator.c
 *
 *  Created on: May 1, 2022
 *      Author: JUMBO
 */
#include <stdio.h>

void main()
{
	char op;
	int x,y;
	printf("Enter a number\n1-->Addition\n2-->Sub\n3-->Division\n4-->Multip : ");
	fflush(stdout);
	scanf("%c",&op);


	printf("Enter a number : ");
		fflush(stdout);
		scanf("%d",&x);

		printf("Enter a number : ");
			fflush(stdout);
			scanf("%d",&y);

			switch(op)
			{
			case '1':
				printf("%d",x+y);break;
			case '2':
				printf("%d",x-y);break;
			case '3':
				printf("%d",x/y);break;
			case '4':
				printf("%d",x*y);break;
			}



}

