//Write a recursive function to find the largest element in a given Unsorted array
#include<stdio.h>
int largest(int *,int,int);
void main()
{
 int ele,i,l;
 printf("enter the no  ele..\n");
 scanf("%d",&ele);
 int a[ele];

 printf("enter the ele..\n");
 for(i=0;i<ele;i++)
 scanf("%d",&a[i]);

 l=largest(a,ele,0);
 printf("%d is larger.\n",l);
}
 
int largest(int *p,int ele,int i)
 {
   static int l;    
    if(i<ele && *p>l)
    {
      l=*p;
      largest(p+1,ele,i+1);
    }
    else if(*p<l && i<ele)
    {
    i+1;
    largest(p+1,ele,i+1);
    }
    else if(i>=ele)
    return l;
 }
