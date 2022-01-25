/*3) Write a program to find the no. of times the character is found in a given string.
Ex: Input: “embedded”
 Character:’d’
 Output: 3*/
#include<stdio.h>
void main()
{
char a[10],ch,i,c;
printf("enter the string and character\n");
scanf("%s %c",a,&ch);
for(i=0,c=0;a[i];i++)
if(a[i]==ch)
c++;

printf("the given character is repeated %d times\n",c);

}
