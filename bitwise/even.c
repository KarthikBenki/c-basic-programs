/*2. WAP to find the given number is even or odd using bitwise operators.*/
#include<stdio.h>
void main()
{
	int num,c=0;
p1:
	printf("enter the num...\n");
	scanf("%d",&num);

	if(num&1)
		printf("odd number\n");
	else
		printf("even number\n");

	c++;
	if(c<5)
		goto p1;

}
