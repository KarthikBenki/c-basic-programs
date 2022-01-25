//Write a recursive function to revese the string.(Note:not just reverse printing.)
#include<stdio.h>
#include<string.h>
void rev_string(char *,int);
void main()
{
 char s[100],l,i;
 printf("enter the string\n");
 scanf("%[^\n]",s);
 l=strlen(s);

 rev_string(s,l-1);

 printf("after reversing\n%s\n",s);
}
void rev_string(char *s,int l)
{
 static int i,ch;
  if(i<l)
  {
     ch=s[i];
     s[i]=s[l];
     s[l]=ch;
     i++;
     l--;
     rev_string(s,l);
  }
}
