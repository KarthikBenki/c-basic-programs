//write a recursive function to revese the given number.
#include<stdio.h>
int rev(int,int);
void main()
{
 int num,r;
printf("enter the num..\n");
 scanf("%d",&num);
 r=rev(num,0);
 printf("before = %d after = %d\n",num,r);
 r=rev(num,0);
 printf("before = %d after = %d\n",num,r);
}
int rev(int num,int s)
{ 
  if(num==0)
 return s;
else
 return rev(num/10,s*10+num%10);
}
