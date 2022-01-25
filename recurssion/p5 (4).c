// recursive function to that displays all the proper divisors of a given number exept that and returns their sum.
#include<stdio.h>
int fact(int,int,int);
void main()
{
 int num,s;
 printf("enter the num..\n");
 scanf("%d",&num);
 s=fact(num,1,0);
 printf("sum of devisors = %d\n",s);
 s=fact(num,1,0);
 printf("sum of devisors = %d\n",s);
}
int fact(int num,int i,int s)
{
 if(i<num)
 {
  if(num%i==0) 
  {
   printf("%d ",i);
   s=s+i;
  }
  fact(num,i+1,s);
 } 
 else
 return s;
}
  

 
