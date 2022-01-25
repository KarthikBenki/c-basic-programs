/*4) Write a C program to convert a character. If it is Lower, convert it to Upper. and if it is
Upper convert it to Lower character.*/


#include<stdio.h>
void main()
{
	char ch;
	printf("enter the character\n");
	scanf("%c",&ch);

	if(ch>='a' && ch<='z')
		ch=ch-' ';
	else if(ch>='A' && ch<='Z')
		ch=ch+' ';
	printf("ch=%c\n",ch);
}
