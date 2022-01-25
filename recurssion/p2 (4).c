// recursive function to print the 'n' fibonacci series numbers
#include<stdio.h>
void fibonacci(int);
void main()
{
 int n,a=0,b=1;
 printf("enter n  print fibonacci series..\n");
 scanf("%d",&n);
 printf("%d %d ",a,b);
 fibonacci(n);
}
void fibonacci(int n)
{
  static int a=0,b=1,s=0;
  if(s<n)
  {
   s=a+b;
   a=b;
   b=s;
   printf(" %d ",s); 
   fibonacci(n);
  }
  else
  printf("\n");
 }
 
