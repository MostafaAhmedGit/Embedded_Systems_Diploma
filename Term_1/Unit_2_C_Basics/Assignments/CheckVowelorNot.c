/*
 * CheckVowelorNot.c
 *
 *  Created on: Apr 30, 2022
 *      Author: JUMBO
 */

#include <stdio.h>

void main()
{
	char x;
	printf("Enter a Letter : ");
	fflush(stdout);
	scanf("%c",&x);

	//using an online ASCII table to get the values
	//For the vowels

	switch(x)
	{
	case'a':
	case'A':
	case'I':
	case'i':
	case'E':
	case'e':
	case'O':
	case'o':
	case'u':
	case'U':
	printf("Its a vowel");
	break;
	default:
	printf("Its not a vowel");
	}
}
