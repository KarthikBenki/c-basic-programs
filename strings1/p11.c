/*11) Write a program to accept two strings from user into two character array and 
  copy one by one character into another destination array. 
Ex: First String: “abcdefg”
Second String: “1234”
Then Destination String: “a1b2c3d4efg”*/
#include<stdio.h>
void main()
{
	char f[10]="abcdefg",s[10]="1234",d[20];
	int i,j,k,l1,l2,l;
	printf("the first string is %s\nthe second string is %s\n",f,s);
	for(l1=0;f[l1];l1++);
	for(l2=0;s[l2];l2++);
	l=l1+l2;
	printf("the total length of destination string must be %d\n",l);
	for(i=0,j=0,k=0;k<l;)
	{
		if(f[i]!=0)
			d[k++]=f[i++];
		if(s[j]!=0)
			d[k++]=s[j++];
		if((f[i]==0)&&(s[j]==0))
			d[k]='\0';
	}
	printf("the destination string is %s",d);
}
