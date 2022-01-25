#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<1+(2*i);j++)
		{
			if(j%2==0)
				printf("%d",i+1);
			else
				printf("*");
		}
		printf("\n");
	}
	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<((2*n)-3)-(2*i);j++)
		{
			if(j%2==0)
				printf("%d",(n-1)-i);
			else
				printf("*");
		}
		printf("\n");
	}
}
