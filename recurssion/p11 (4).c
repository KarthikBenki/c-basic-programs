//Write a recursive function to reverse the bits of a given number.
#include<stdio.h>
int reverse(int );
void main()
{
 int num,num1,pos;
 printf("enter the num..\n");
 scanf("%d",&num);
  
 for(pos=31;pos>=0;pos--)
 printf("%d",num>>pos&1);
 printf("\n");

 num1=reverse(num);

 for(pos=31;pos>=0;pos--)
 printf("%d",num1>>pos&1);
 printf("\n");
}
int reverse(int num)
{
  static int j=31,i=0;
  int m,n;
  m=num>>j&1;
  n=num>>i&1;
    if(m!=n)
    {
       num=num^1<<j;
       num=num^1<<i;
       j=j-1;
       i=i+1;
       reverse(num);
    }
    else if(j>i)
    {
    j=j-1;
    i=i+1;
     reverse(num);
    }
    else 
    return num;
}  




     
 

