/*5) Write a program to compare two strings.
Ex: First String: “vector”
Second String: “vector” 
Output: equal*/
#include<stdio.h>
void main()
{
	char f[10],s[10],i,j,k;
	printf("enter the first string\n");
	scanf("%s",f);
	printf("enter the second string\n");
	scanf("%s",s);
	for(i=0;f[i];i++)
		if(f[i]!=s[i])
			break;
	if(f[i]==s[i])
		printf("equal\n");
	else
		printf("not equal\n");
}
