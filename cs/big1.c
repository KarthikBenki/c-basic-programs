/*18) Write a C program to find out the biggest number of three variables using if-else ladder
and terinary operator.*/


#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the number \n");
	scanf("%d%d%d",&a,&b,&c);

	if(a>b&&a>c)
	{
		printf("a is greater\n");
		printf("a=%d",a);
	}
	else if(b>a&&b>c)
	{
		printf("b is greater\n");
		printf("b=%d",b);
	}
	else if(c>a&&c>b)
	{
		printf("c is greater\n");
		printf("c=%d",c);
	}
	printf("\n");
}
