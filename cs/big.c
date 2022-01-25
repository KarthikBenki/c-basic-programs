/*18) Write a C program to find out the biggest number of three variables using if-else ladder
and terinary operator.*/


#include<stdio.h>
void main()
{
int a,b,c,big;

printf("enter the theree numbers\n");
scanf("%d%d%d",&a,&b,&c);

big=a>b?(a>c?a:c):(b>c?b:c);

printf("big = %d\n",big);
}
