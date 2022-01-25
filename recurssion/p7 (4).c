//Write a recursive function to print first 100 prime numbers.
#include<stdio.h>
int prime(int,int);
void main()
{
	int i,c1=0;
	printf("prime numbers....\n");
	for(i=2;;i++)
	{
		c1=prime(i,2);
            //  printf("*%d ",c1);
		if(c1>=10)
			break;

	}
	printf("\n");
}
int prime(int n,int j)
{ 
 	static int c1=0;
	if(j<n)
	{
		if(n%j!=0) 
			prime(n,j+1);
	}
	else if(n==j)
	{
		printf("%d ",n);
		c1=c1+1;
                return c1;
	}

}
