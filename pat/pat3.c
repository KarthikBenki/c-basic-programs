#include<stdio.h>
void main()
{
	int i,j,k;

	for(i=0;i<5;i++)
	{
		for(j=0;j<i;j++)
			printf(" ");
		for(k=0;k<6-i;k++)
			printf("* ");

		printf("\n");
	}
	for(i=0;i<6;i++)
	{
		for(j=0;j<5-i;j++)
			printf(" ");
		for(k=0;k<1+i;k++)
			printf("* ");

		printf("\n");
	}

}
