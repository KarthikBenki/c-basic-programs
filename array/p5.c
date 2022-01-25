/*5) Write a C program to reverse the elements of a given array.*/
#include<stdio.h>
void main()
{
int a[5],ele,i,j,k;
ele = sizeof(a)/sizeof(a[0]);
printf("enter the array of elements\n");

for(i=0;i<ele;i++)
scanf("%d",&a[i]);

printf("the elements are \n");

for(i=0;i<ele;i++)
printf("a[%d]=%d ",i,a[i]);

printf("\n");

for(i=0,j=ele-1;i<j;i++,j--)
{
k=a[i];
a[i]=a[j];
a[j]=k;
}

printf("after reversing\n");

for(i=0;i<ele;i++)
printf("a[%d]=%d ",i,a[i]);

printf("\n");
}
