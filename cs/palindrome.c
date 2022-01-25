/*15) Write a C program to print palindrome numbers between 1 to 1000.
(palindrome numbers means the numbers which are equal to its reverse.
Ex : 11,22,33,44,.........999. )*/

#include<stdio.h>
void main()
{
int num,num1,s,r;
//printf("enter the number to add the digits \n");
//scanf("%d",&num);
for(num=1;num<=1000;num++)
{

for(s=0,num1=num;num1;num1=num1/10)
{
r=num1%10;
s=s*10+r;

}
if(s==num)
{
if(s>10)
printf("  %d",s);
}
}
printf("\n");
}
