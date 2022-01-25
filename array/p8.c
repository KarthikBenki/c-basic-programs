/*8) Write a C program which deletes the duplicate elements of an array*/
#include<stdio.h>
void main()
{
	int s[]={'A','C','B','D','A','B','E','D','B','C'},i,j,k,ele;
	ele=sizeof(s)/sizeof(s[0]);
	for(i=0;i<ele;i++)
		printf("%c ",s[i]);
	printf("\n");
	for(i=0;i<ele;i++)
	{
		for(j=i+1;j<ele;j++)
			if(s[i]==s[j])
			{
				for(k=j;k<ele;k++)
					s[k]=s[k+1];
				ele--;
			}
	}
	for(i=0;i<ele;i++)
		printf("%c ",s[i]);
	printf("\n");

}
