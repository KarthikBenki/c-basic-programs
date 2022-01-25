/*6) Write a program to reverse the string.
7) Write a program to check the given strings are palindrome or not.
Note: Palindrome words are words which read and spell the same way both 
backwards and forwards. 
Ex: madam, level , radar, stats and etc.*/
#include<stdio.h>
void main()
{
char s[10],p[10],i,j,k;
int l;
printf("enter the string\n");
scanf("%s",s);
printf("s = %s\n",s);

for(l=0;s[l];l++);
printf("the length of string is = %d\n",l);

for(i=0,j=l-1;s[i];i++,j--)
p[j]=s[i];

p[l]='\0';
printf("p = %s\n",p);

for(i=0;s[i];i++)
if(s[i]!=p[i])
break;

if(s[i]==p[i])
printf("palindrome\n");
else
printf("not a palindrome\n");

}



