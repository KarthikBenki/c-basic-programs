/*10. Write a one line code to compare two numbers using bitwise operators.*/

#include<stdio.h>
void main()
{
	int n1,n2;
	printf("enter the num 1\n");
	scanf("%d",&n1);
	printf("enter the num 2\n");
	scanf("%d",&n2);

	if((n1^n2)==0)
		printf("n1 and n2 are equal\n");
	else
		printf("n1 and n2 are not equal\n");
}
