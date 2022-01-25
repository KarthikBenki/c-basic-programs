//16) Write a C program to print fibonacci series between 0 to 50.
#include<stdio.h>
void main()
{
	int a,b,c;
	a=0;
	b=1;

	printf("%d",a);
	printf(",%d",b);
	do
	{
		c=a+b;
		printf(",%d",c);
		a=b+c;
		printf(",%d",a);
		b=c+a;
		printf(",%d",b);
	}
	while(b<=50);
	printf("\n");
}

