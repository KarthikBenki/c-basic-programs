/*8) Write a C program to print the binary of a given number( +ve or -ve numbers).*/


#include<stdio.h>
void main()
{
	int num,pos;
	printf("enter the number\n");
	scanf("%d",&num);
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",num>>pos&1);
	}
	printf("\n");
}
