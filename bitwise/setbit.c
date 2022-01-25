/*1. Write a program for the following one.
a) Set a bit b) Clear a bit c) Toggle a bit*/


#include<stdio.h>
void main()
{
	int num,pos,x;
	printf("enter the \n 1-number \n 2-pos....\n");
	scanf("%d%d",&num,&pos);
	printf("select\n1) to set a bit\n2) to clear a bit\n3) to toggle a bit\n");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			printf("%d\n",num=num|1<<pos);
			break;
		case 2:
			printf("%d\n",num=num&~(1<<pos));
			break;
		case 3:
			printf("%d\n",num=num^1<<pos);
			break;

		default:
			printf("invalid selection");



	}
}
