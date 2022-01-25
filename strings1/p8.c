/*8) Write a program to delete a desired character in a given string.
Ex: Input: “embedded”
Character:’d’
Output: “embee”*/
#include<stdio.h>
void main()
{
	char s[10],ch;
	int i,j;
	printf("enter the string\n");
	scanf("%s",s);
	printf("enter the character\n");
	scanf(" %c",&ch);
	printf("the string is = %s\n",s);
	printf("the character is %c\n",ch);

	for(i=0;s[i];i++)
	{
		if(s[i]==ch)
		{
			for(j=i;s[j];j++)
				s[j]=s[j+1];
			i--;
		}
	}
	printf("the string after deletion is = %s\n",s);
}
