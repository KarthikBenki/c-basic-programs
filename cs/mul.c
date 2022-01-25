/*5) Write a C program to print multiplication tables from 10 to 20.*/


#include<stdio.h>
void main()
{
int num,i;
//printf("enter the number\n");
//scanf("%d",&num);
for(i=1;i<=10;i++)
{
for(num=10;num<=20;num++)
{
printf("%d",num*i);
printf("\t");
}
printf("\n");
}
printf("\n");
}
