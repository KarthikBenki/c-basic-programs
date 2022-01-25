//Write a recursive function to revese the elements of a given array.
#include<stdio.h>
void arr_rev(int *,int);
void main()
{
 int ele,i;
 printf("enter the number of elements..\n");
 scanf("%d",&ele);
 int a[ele];
 
 printf("enter the elements..\n");
 for(i=0;i<ele;i++)
 scanf("%d",&a[i]);

 printf("before reversing..\n");
 for(i=0;i<ele;i++)
 printf("%d ",a[i]);
 printf("\n");

 arr_rev(a,ele-1);
 
 printf("after reversing..\n");
 for(i=0;i<ele;i++)
 printf("%d ",a[i]);

 printf("\n");
}
void arr_rev(int *p,int ele)
{ 
    static int i;
    int t;
    if(i<ele)
    {
       t=p[i];
      p[i]=p[ele];
      p[ele]=t;
      i++;
      ele--;
     arr_rev(p,ele);
    }    
}   
  

