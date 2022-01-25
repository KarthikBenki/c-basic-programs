/*7. Write a program to rotate the bits. Input the no.of rotations, at runtime.
Ex : binary : 10000000000000000000000000001011
rotations : suppose 3 times right, then
result : 01110000000000000000000000000001
binary : 10000000000000000000000000001011
rotations : suppose 4 times left, then
result : 00000000000000000000000010111000*/
#include<stdio.h>
void main()
{
int num,pos,rot,d;
printf("enter the num to rotate bits\n");
scanf("%d",&num);
printf("enter the time of rotation\n");
scanf("%d",&rot);
printf("select the type of rotation\n1) right\n2) left\n");
scanf("%d",&d);
printf("the binary before %d rotation\n",rot);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);

printf("\n");

switch(d)
{
case 1:
num=num>>rot|num<<(32-rot);
break;
case 2:
num=num<<rot|num>>(32-rot);
break;
}
if(d>=1&d<=2)
{
printf("the binary after %d rotation\n",rot);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
}
else
printf("invalid rotation\n");
printf("\n");
}
