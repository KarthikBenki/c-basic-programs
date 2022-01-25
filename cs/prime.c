/*6) Write a C program to print first 100 prime numbers.*/


#include<stdio.h>
void main()
{
	int num,i,c=0,k=0;
	for(num=1;c<=5;num++)
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
				break;

		}
		if(num==i)
		{
			c++;
			printf("%d\t",num);
			k++;
		}
	}
	printf("\n");
	printf("count = %d\n",k);
	printf("\n");
}
