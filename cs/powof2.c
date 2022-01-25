/*17) Write a C program to find the given number is power of 2 or not.*/



#include<stdio.h>
void main()
{
	int n;

	printf("enter the number\n");
	scanf("%d",&n);
	if(n&(n-1))
		printf("not a power of 2\n");
	else
		printf("power of 2\n");


}

