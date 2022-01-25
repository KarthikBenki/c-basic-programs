/*WAP to find the given number is divisble by 8 or not using bitwise operators.*/

#include<stdio.h>
void main()
{
	int n;

	printf("enter the number\n");
	scanf("%d",&n);
	if(((n >> 3)<<3)==n)
	{
		printf("the number is divisable by 8\n");
	}
	else
	{
		printf("the number is not divisible by 8\n");
	}
}
