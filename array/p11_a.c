/*11) Write a program to copy the elements of one array into another array without duplicate
  items as a first slot, and store duplicate elements as a second slot.
Ex: source array {10,2,4,5,2,1,3,4,6,5,8,9,2}
destination arrays {10,2,4,5,1,3,6,8,9} , { 2,2,4,5} 
first slot second slot
Take two different arrays for first and second slots.*/
#include<stdio.h>
void main()
{
	int ele,i,j,k,l,m,flag=0,c;
	printf("enter the number of elements\n");
	scanf("%d",&ele);
	int s[ele],d[ele],nd[ele];
	printf("enter the array of elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&s[i]);
	for(i=0;i<ele;i++)
		printf("s[%d]=%d ",i,s[i]);
	printf("\n");

	for(i=0,l=0,m=0;i<ele;i++)
	{
		for(j=i-1,flag=0;j>=0;j--)
			if(s[j]==s[i])
			{
				flag=1;
				break;
			}
		if(flag==0)
			{
			for(k=i+1,c=0;k<ele;k++)
			{
				if(s[k]==s[i])
				{
					d[l]=s[i];
					c++;
					l++;
				}
			}
			}
				if(c>=0)
				{
					nd[m]=s[i];
					m++;
				}
	}
		printf("the non duplicate elements are \n");
		for(i=0;i<m;i++)
			printf("nd[%d]=%d ",i,nd[i]);
		printf("\n");
	}

