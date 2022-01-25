#include<stdio.h>
void main()
{
	int i,j,k,l;

	for(i=0;i<5;i++)
	{
		for(j=0,k=0,l=4;j<1+i;j++,l--)
		{
			printf("%d ",i+1+k);
			k=k+l;
		}
		printf("\n");
	}
}
