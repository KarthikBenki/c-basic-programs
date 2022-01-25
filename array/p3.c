/*3) Write a C program to input 10 numbers through the keyboard and find the number
  of prime numbers count, store them into a seperate array and display it.*/
#include<stdio.h>
void main()
{
	int a[10],b[10],ele,i,j,k,num,c;

	ele = sizeof(a)/sizeof(a[9]);


	printf("enter the array elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	for(i=0;i<ele;i++)
		printf("a[%d]=%d ",i,a[i]);

	printf("\n");

	for(i=0,c=0;i<ele;i++)
	{
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
				break;
		}
		if(a[i]==j)
		{
			b[c]=a[i];
			c++;
		}
	}
	printf("the number of prime numbers present in the given array are %d\n",c);
	printf("the prime numbers are\n");
	for(k=0;k<c;k++)
		printf("b[%d]=%d  ",k,b[k]);

	printf("\n");


}
