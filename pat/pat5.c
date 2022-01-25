#include<stdio.h>
void main()
{
	int i,j,k,l;

	for(i=0;i<5;i++)
	{
		k=1;
		for(j=0;j<i+1;j++)
		{
			printf("%d",i+1);
			if(k<i+1)
			{
				printf("*");
				k=k+1;
			}
		}

		printf("\n");

	}
	for(i=0;i<4;i++)
	{
		k=1;
		for(j=0;j<4-i;j++)
		{
			printf("%d",4-i);
			if(k<4-i)
			{
				printf("*");
				k=k+1;
			}
		}
		printf("\n");
	}




}
