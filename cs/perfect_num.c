//20) Write a C program to find the given number is Perfect number or not?
//Note : Perfect number means sum of it's divisers exept that num is equalent to the same
//number.
#include<stdio.h>
void main()
{
int num,d,i;
printf("enter the number \n");
scanf("%d",&num);
for(i=1,d=0;i<num;i++)
{
if(num%i==0)
{
printf("the devicers are = %d\n",i);
d=d+i;
}
}
printf("sum of devisers = %d\n",d);
if(num==d)
printf("the number is a perfect number\n");
else
printf("the number is not a perfect number\n");

}
