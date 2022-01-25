/*4) Write a program to find vowels in a given string.
Ex: Input: “embedded”
 Output: 3*/
#include<stdio.h>
void main()
{
char v[10]="aeiou",s[10]="embedded",i,j,ch;
int c;
//printf("enter the string\n");
//scanf("%s",s);

for(i=0,c=0;v[i];i++)
{
for(j=0;s[j];j++)
{
if(v[i]=s[j])
c++;
}
}
printf("the number of vowels present in given array are %d\n",c);
}
