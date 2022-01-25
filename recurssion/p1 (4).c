//recursive function to find the factorial of a given number..
#include<stdio.h>
int fact(int);
void main()
{
 int num,r,num1=10;
 printf("enter the number..\n");
 scanf("%d",&num);
 r=fact(num);
 printf("fact of %d = %d\n",num,r);
 r=fact(num1);
 printf("fact of %d = %d\n",num,r);
}
int fact(int n)
{
 int f=1;
   if(n)
   return f=n*fact(n-1);
   else
   return f;
}

