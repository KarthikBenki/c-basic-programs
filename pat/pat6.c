#include<stdio.h>
void main()
{
	int i,j,k;

	for(i=0;i<5;i++)
	{
		for(j=0,k=1;j<i+1;j++)
		{
			if(j%2==0)
				printf("1");
			else
				printf("0");
			//printf("%d",k);
			//k=!k;
		}

		printf("\n");
	}

}
