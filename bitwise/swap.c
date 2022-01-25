/*WAP to swap two numbers using bitwise operators.*/

#include<stdio.h>
void main()
{
	int num1,num2;
	printf("enter the num1\n");
	scanf("%d",&num1);
	printf("enter the num2\n");
	scanf("%d",&num2);
	printf("before swap \nnum1=%d\nnum2=%d\n",num1,num2);
	num1=num1^num2;
	num2=num1^num2;
	num1=num1^num2;
	printf("after swap \nnum1=%d\nnum2=%d\n",num1,num2);



}
