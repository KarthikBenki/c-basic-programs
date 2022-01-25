/*WAP to find the given number is +ve or -ve using bitwise operators.*/

#include<stdio.h>
void main()
{
	int num,c=0;
p1:
	printf("enter the num...\n");
	scanf("%d",&num);
	if(num>>31&1)
		printf("negative number\n");
	else
		printf("positive number\n");

	c++;
	if(c<5)
		goto p1;

}
