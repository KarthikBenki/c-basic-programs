/*12. Write a program to swap the adjucent bytes of a given 4-digit
hexadecimal number.
Ex : given number = 0x1234;
after swap : 0x3412;*/


#include<stdio.h>
void main()
{
int n=0x1234,n1=0x00ff,n2=0xff00,r1,r2,r;

printf("before swap = %x\n",n);
r1=n&n1;
r1=r1<<8;
//printf("%x\n",r1);

r2=n&n2;
r2=r2>>8;
//printf("%x\n",r2);

r=r1|r2;
printf("after swap = %x\n",r);



}
