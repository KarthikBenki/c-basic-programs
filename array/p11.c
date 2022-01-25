/*11) Write a program to copy the elements of one array into another array without duplicate
  items as a first slot, and store duplicate elements as a second slot.
Ex: source array {10,2,4,5,2,1,3,4,6,5,8,9,2}
destination arrays {10,2,4,5,1,3,6,8,9} , { 2,2,4,5} 
first slot second slot
Take two different arrays for first and second slots.*/
#include<stdio.h>
void main()
{
	int a[]={10,2,4,5,2,1,3,4,6,5,8,9,2},ele,i,j,k,flag,c,l,m;
	ele = sizeof(a)/sizeof(a[5]);
	int nd[ele],d[ele];

	printf("the elements in the given array are\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");


	for(i=0,l=0,m=0;i<ele;i++)
	{
		for(j=i-1,flag=0;j>=0;j--)
		{
			if(a[i]==a[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			for(k=i+1,c=0;k<ele;k++)
			{
				if(a[i]==a[k])
				{
					d[l]=a[i];
					c++;
					l++;
				}
			}
			if(c>=0)
			{
				nd[m]=a[i];
				m++;
			}
			//printf("%c repeated %d times\n",a[i],c);
		}



	}
	printf("the non duplicate elements are\n");
	for(i=0;i<m;i++)
		printf("%d ",nd[i]);
	printf("\n");

	printf("the  duplicate elements are\n");
	for(i=0;i<l;i++)
		printf("%d ",d[i]);
	printf("\n");

}

