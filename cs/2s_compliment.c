//12) Write a C program to find the 2's complement of a given number and then print it's
//binay, decimal, octal and Hexa decimal values.
//Note : number can be either +ve or -ve. And obeseve the result satiefying it's
//formulae or not.
//Formulae : 2's complement of (x) = - (x)

#include<stdio.h>
void main()
{
	int num1,num2,num3,pos;

	printf("enter the number\n");
	scanf("%d",&num1);
	num2=(~num1)+1;
	num3=-(num1);
	printf("the binary of complemented number using ~ is\n");
	for(pos=31;pos>=0;pos--)
		printf("%d",num2>>pos&1);
	printf("\n");
	printf("the binary of complemented number using formulae is\n");
	for(pos=31;pos>=0;pos--)
		printf("%d",num3>>pos&1);
	printf("\n");
	printf("decimal,octal and hexa decimal values using ~ compliment\n");
	printf("decimal = %d\noctal = %o\nhexadecimal = %x\n",num2,num2,num2);
	printf("decimal,octal and hexa decimal values using ~ formulae\n");
	printf("decimal = %d\noctal = %o\nhexadecimal = %x\n",num3,num3,num3);

if(num2==num3)
printf("the result is satisfying the formulae\n");


}

