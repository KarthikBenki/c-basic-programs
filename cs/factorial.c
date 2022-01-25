/*1) Write a C Program to Find the factorial of a given number. User has to take the i/p at
runtime.*/

#include<stdio.h>
void main()
{
	int num,fact,i;

	printf("enter the number\n");
	scanf("%d",&num);
	for(i=1,fact=1;i<=num;i++)
	{
		fact=fact*i;

	}

	printf("fact=%d\n",fact);
}
