/*8. Convert the characters Upper to Lower and Lower to Upper using bitwise
operators.*/

#include<stdio.h>
void main()
{
	char ch,pos=5;

	printf("enter the character\n");
	scanf("%c",&ch);
	printf("before = %c\n",ch);
	ch=ch^1<<pos;
	printf("after = %c\n",ch);


}
