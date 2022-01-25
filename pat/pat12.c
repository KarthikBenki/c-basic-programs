#include<stdio.h>
void main()
{
	int i,j,k;

	for(i=0;i<4;i++,k++)
	{
		if(i==1)
			k=0;
		for(j=0;j<3-i;j++)
		{
			printf(" ");
		}
		printf("*");

		for(j=0;j<1+(2*k);j++)
		{
			printf(" ");
		}
		if(i>0)
			printf("*");

		printf("\n");

	}

	for(i=0,k=0;i<3;i++,k++)
	{
		for(j=0;j<1+i;j++)
		{

			printf(" ");
		}

		printf("*\n");
		if(i!=2)
		{
			for(j=0;j<3-(2*k);j++)
			{
				printf(" ");
			}

			printf("*");

			printf("\n");
		}
	}

}
