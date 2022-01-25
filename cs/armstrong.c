/*7) Write a C program to print ArmStrong Numbers between 1 to 500.*/


#include<stdio.h>
#include<math.h>
void main()
{
	int num,num1,num2,c,p,r;

	for(num=1;num<=500;num++)
	{
		for(c=0,num1=num;num1;num1=num1/10)
		{
			c++;
		}
		for(p=0,num2=num;num2;num2=num2/10)
		{
			r=num2%10;
			p=p+pow(r,c);
		}
		if(num==p)
		{
			printf("%d\t",p);
		}
	}
	printf("\n");
}
