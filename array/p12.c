/*12) Write a C program to evaluate the following series. The series contains sum of
square of numbers from 1 to 'n'. Strore result of each term in an array. Calculate 
value of ' S ' using array.
 S = 1^2 + 2^2 + 3^2 + 4^2 + ------ n^2
 = [ 1, 4, 9, 16, -------- n^2 ]
 Suppose n = 4,
then S = 1^2+2^2+3^2+4^2;
 S = 1+4+9+16; 
S = 30.*/
#include<stdio.h>
#include<math.h>
void main()
{
int n,i,j,k,s;
printf("enter the array length \n");
scanf("%d",&n);
int a[n];
for(i=0,j=1;i<n;i++,j++)
{
a[i]=j;
a[i]=pow(a[i],2);
}
printf("the squares of consecutive series in array is\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);

for(i=0,s=0;i<n;i++)
s=s+a[i];
printf("\n");

printf("the sum of square of numbers is %d\n",s);
}
