/*10) Write a C program to implement a Calculator using switch.*/


#include<stdio.h>
void main()
{
	int a,b,x;
	printf("enter a\n");
	scanf("%d",&a);
	printf("enter b\n");
	scanf("%d",&b);

	printf("enter the calculator operation to perform\n");
	printf("1) addition\n2) subtraction\n3) multiplication\n4) division");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			printf("sum=%d\n",a+b);
			break;
		case 2:
			printf("diff=%d\n",a-b);
			break;
		case 3:
			printf("sum=%d\n",a*b);
			break;
		case 4:
			printf("div=%d\n",a/b);
			break;

		default :
			printf("not a valid calculation\n");
			break;

	}
}
