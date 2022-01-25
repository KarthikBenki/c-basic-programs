//Write a recursive function to find the sum of digits of a given number.
#include<stdio.h>
int sum(int);
void main()
{
 int num,r;
 printf("enter the num..\n");
 scanf("%d",&num);
 r=sum(num);
 printf("sum of the digits is %d\n",r);
 r=sum(num);
 printf("sum of the digits is %d\n",r);
} 
int sum(int num)
{
 static int s=0;
  int r;
  if(num)
  {
   r=num%10;
   return r+sum(num/=10);
  }
  else 
  return 0;
}
