/*Write a C program to insert an element at desired position in an array.*/
#include<stdio.h>
void main()
{
	int ele,i,j,k,pos,ch;
	//int a[10]={'b','c','d','e'};
	int a[10]={2,3,4,5,6,7};
	ele = sizeof(a)/sizeof(a[0]);
	for(i=0;i<10;i++)
		printf("a[%d]=%d  ",i,a[i]);

	printf("\n");
	printf("enter the character\n");
	scanf("%d",&ch);

	printf("enter the position\n");
	scanf("%d",&pos);

	for(i=ele-2;i>=pos;i--)
		a[i+1]=a[i];

	a[pos]=ch;


	for(i=0;i<10;i++)
		printf("a[%d]=%d  ",i,a[i]);

	printf("\n");
}
