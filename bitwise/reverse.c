// Write a program to reverse the bits of a given number.     Note : not just reverse printing.

#include<stdio.h>
void main()
{
	int i,j,m,n,num,num1,pos;
	printf("enter the number\n");
	scanf("%d",&num);

	for(pos=31,num1=num;pos>=0;pos--)
		printf("%d",num1>>pos&1);

	printf("\n");
	///////////////////////////////////////
	for(i=0,j=31;i<j;i++,j--)
	{
		m=num>>i&1;
		n=num>>j&1;
		if(m!=n)
		{
			num=num^1<<i;
			num=num^1<<j;
		}

	}



	/////////////////////////////////////
	for(pos=31,num1=num;pos>=0;pos--)
		printf("%d",num1>>pos&1);

	printf("\n");
}
