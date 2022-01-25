/*2) Write a C Program to Find the sum of digits of a given number.*/


#include<stdio.h>
void main()
{
	int num,num1,s,r;
	printf("enter the number to add the digits \n");
	scanf("%d",&num);

	for(s=0,num1=num;num1;num1=num1/10)
	{
		r=num1%10;
		s=s+r;

	}
	printf("sum=%d\n",s);
}
