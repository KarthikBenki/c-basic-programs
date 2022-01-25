/*A number is perfect if the sum of all its positive proper divisors is equal to the  number. For example 28 is a perfect number since 28 = 1+2+4+14. Write a
  recursive function that finds whether a number is perfect or not.*/
#include<stdio.h>
int perfect(int,int,int);
void main()
{
 int num,l;
 printf("enter the number..\n");
 scanf("%d",&num);
  
 l=perfect(num,1,0);
 if(l==0)
 printf("not a perfect no\n");
 else 
 printf("perfect no..\n");

 l=perfect(num,1,0);
 if(l==0)
 printf("not a perfect no\n");
 else 
 printf("perfect no..\n");
}
int perfect(int num,int j,int s)
{
  
  if(j<num)
  {
      if(num%j==0)
      s=s+j;
      j++;
      perfect(num,j,s);
  }
  else if(num==s)
   return 1;
  else
   return 0;
}



 





 
