/*1) Write a program to find string length using pointer.*/
#include<stdio.h>
void main()
{
int i,j,k;
char *p;
char s[10]="abcde";
p=s;

for(i=0;p[i];i++);
printf("the length of given string using pointer is %d\n",i);

}
