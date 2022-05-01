/*
 * factorial.c
 *
 *  Created on: May 1, 2022
 *      Author: JUMBO
 */


#include<stdio.h>
int main()
{
 int i,factorial=1,x;

 printf("Enter a number: ");
 fflush(stdout);
  scanf("%d",&x);

  for(i=1;i<=x;i++)
  {
    	factorial=factorial*i;
  }
  printf("Factorial is: %d",factorial);
return 0;
}
