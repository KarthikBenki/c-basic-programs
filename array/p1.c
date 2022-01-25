/*1) Write a C program to input 10 numbers through the keyboard into an array and
  display the results of addition of even numbers and product of odd numbers.*/
#include<stdio.h>
void main()
{
	int a[10],i,j,k,ele,add,mul;

	ele = sizeof(a)/sizeof(a[0]);
	printf("enter the array elements\n");
	for(j=0;j<ele;j++)
		scanf("%d",&a[j]);

	printf("the array elements are \n");
	for(j=0;j<ele;j++)
		printf("a[%d]=%d  ",j,a[j]);
printf("\n");

	for(i=0,add=0,mul=1;i<ele;i++)
	{
		if(a[i]%2==0)
			add=add+a[i];
		else
			mul=mul*a[i];
	}
	printf("the addition of even numbers is %d\n",add);
	printf("the product of odd numbers is %d\n",mul);
}
