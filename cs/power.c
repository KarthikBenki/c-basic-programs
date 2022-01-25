//13) Write a C program to find out power of given number without using pow() function.
#include<stdio.h>
void main()
{
	int num,n,pow,i;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("enter the powere\n");
	scanf("%d",&n);
	for(pow=1,i=0;i<n;i++)
	{
		pow=pow*num;
	}
	printf("power is = %d\n",pow);
}
