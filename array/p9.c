/*8) Write a C program which deletes the duplicate elements of an array.*/
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


	for(i=0;i<ele;i++)
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
			for(k=i+1,c=1;k<ele;k++)
			{
				if(a[i]==a[k])
					c++;
			}
if(c>1)

			printf("%d repeated %d times\n",a[i],c);
		}



	}
}
