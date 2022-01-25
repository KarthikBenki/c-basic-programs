#include<stdio.h>
void main()
{
	int i,j,k;

	for(i=0;i<4;i++)
	{
		for(j=0;j<3-i;j++)
		{
			printf(" ");
		}
		printf("*");

		for(k=0;k<(2*i)-1;k++)
		{
			printf(" ");
		}

		if(i>0)
			printf("*");
		printf("\n");

	}


	for(i=0;i<3;i++)
	{
		for(j=0;j<1+i;j++)
		{
			printf(" ");
		}

		printf("*");

		for(k=0;k<3-(2*i);k++)
		{
			printf(" ");
		}

		if(i<2)
			printf("*");


		printf("\n");

	}
}
