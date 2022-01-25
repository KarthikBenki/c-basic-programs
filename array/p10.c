/*10) Write a program to print the non repeted numbers of a given array.
Ex : if int a[] = {0,3,1,0,5,1,2,0,4,5}
Output : 3, 2, 4*/
#include<stdio.h>
void main()
{
	int a[10]={0,3,1,0,5,1,2,0,4,5},ele,i,j,k,flag,c;
	ele = sizeof(a)/sizeof(a[5]);

	printf("enter the elements in the array\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	printf("the elements in the given array are\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");

printf("the non repeated elements are\n");
	for(i=0;i<ele;i++)
	{
		for(j=0,c=0;j<ele;j++)
			if(a[i]==a[j])
				c++;
		if(c==1)
			printf("%d ",a[i]);
	}
printf("\n");
}
