#include<stdio.h>
void main()
{
	int i,j,k;

	for(i=0;i<5;i++)
	{
		for(j=0,k=1;j<1+i;j++)
		{
			printf("%d",k);
			k=!k;
		}
		printf("\n");

	}

}
