 //Write a recursive function to print the palindrome numbers in a given numbers 
#include<stdio.h>
void palindrome_no(int,int,int);
void main()
{
 int ele,i; 
 printf("enter the no of elements\n");
 scanf("%d",&ele);
 int arr[ele];
 printf("enter the ele..\n");
 for(i=0;i<ele;i++)
 scanf("%d",&arr[i]);

 for(i=0;i<ele;i++)
{
 palindrome_no(arr[i],0,arr[i]);
}
printf("\n");
}
void palindrome_no(int num,int s,int org)
{
    int r;
      if(num)
      {
         r=num%10;
         s=s*10+r;
         palindrome_no(num/10,s,org);
      }
      else if (s==org)
      printf("%d ",s);
}
 
