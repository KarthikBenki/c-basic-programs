/*6) Write a program to reverse the string.*/
#include<stdio.h>
void main()
{
char s[10],i,j,k;
int l;
printf("enter the string\n");
scanf("%s",s);
printf("before reverse = %s\n",s);

for(l=0;s[l];l++);
printf("the length of string is = %d\n",l);

for(i=0,j=l-1;i<j;i++,j--)
{
k=s[i];
s[i]=s[j];
s[j]=k;
}
printf("after reverse = %s\n",s);
}
