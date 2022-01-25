/*Write a C program to delete an element at desired position from an array.*/
#include<stdio.h>
void main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},i,j,k,ele,pos;

	ele =sizeof(a)/sizeof(a[0]);
	printf("the array of elements are\n");

	for(i=0;i<ele;i++)
		printf("a[%d]=%d  ",i,a[i]);
	printf("\n");
	printf("enter the pos where the element should be deleted\n");
	scanf("%d",&pos);

	//a[pos-1]=0;
	a[pos]=0;
	for(i=0;i<ele;i++)
	{
		if(a[i]==0)
		{
			for(j=i;j<ele;j++)
				a[j]=a[j+1];
		}
	}

	for(i=0;i<ele-1;i++)
		printf("a[%d]=%d  ",i,a[i]);
	printf("\n");
}
