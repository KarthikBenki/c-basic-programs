/*9) Write a program to find count of Lower characters, Upper characters, Special 
  characters and digits occurred in a given string.
Ex: Input: “a1b@CD2#”
Output: Lower characters : 2 
Upper characters : 2
Special characters : 2
digits : 2*/
#include<stdio.h>
void main()
{
	char s[10]="a1b@CD2#";
	int i,j,k,l,u,sp,d;

	for(i=0,l=0,u=0,sp=0,d=0;s[i];i++)
	{
		if(s[i]>='a'&&s[i]<='z')
			l++;
		else if(s[i]>='A'&&s[i]<='z')
			u++;
		else if((s[i]>=' '&&s[i]<='/')||(s[i]>=':'&&s[i]<='@'))
			sp++;
		else if(s[i]>='0'&&s[i]<='9')
			d++;

	}
	printf("lower character : %d\nupper character : %d\nspecial character : %d\ndigits : %d\n",l,u,sp,d);

}
