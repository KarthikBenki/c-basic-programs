/*10) Write a program to convert the characters Upper to Lower and Lower to Upper
  in a given string.
Ex: Input: “embedded”
Output: “EMBEDDED*/
#include<stdio.h>
void main()
{
	char s[10]="eMbEdDeD";
	int i;
	printf("the string before conversion is %s\n",s);
	for(i=0;s[i];i++)
	{
		if(s[i]>='a'&&s[i]<='z')
			s[i]=s[i]-' ';
	}
	printf("the string after conversion to upper is %s\n",s);
	for(i=0;s[i];i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
			s[i]=s[i]+' ';
	}
	printf("the string after conversion to lower is %s\n",s);
}
