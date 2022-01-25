/*2) Write a C program to input 10 numbers through the keyboard into an array and find the 
  biggest and smallest number in an Unsorted array without using any Sorting Technique.*/
#include<stdio.h>
void main()
{
	int i,j,t,a[10],ele,large,ind1=0,ind2=0,small;

	ele = sizeof(a)/sizeof(a[0]);
	printf("enter the array of digits\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
		printf("a[%d]=%d  ",i,a[i]);
	printf("\n");

	large=a[0];
	small=a[0];
	for(i=1;i<ele;i++)
	{
		if(a[i]>large)
		{
			large=a[i];
			ind1=i;
		}
		if(a[i]<small)
		{
			small=a[i];
			ind2=i;
		}
	}
	printf("the largest number in the given array is %d and its index is a[%d]\n",large,ind1);
	printf("the smallest number in the given array is %d and its index is a[%d]\n",small,ind2);


}
