/*13. Write a program to delete no.of bits from perticular position in a given number.
Input the no.of bits, at runtime.
Ex: Suppose num = 100;
It's Binaray is 00000000000000000000000001100100
delete 2 bits from 4th position
then result is 00000000000000000000000000011100*/
#include<stdio.h>
void main()
{
int num,pos,d,p;
printf("enter the number\n");
scanf("%d",&num);
printf("enter the pos\n");
scanf("%d",&pos);
//printf("enter the number of bits to be deleted\n");
//scanf("%d",&d);
for(p=31;p>=0;p--)
{
printf("%d",num>>p&1);
}
printf("\n");

num=(num>>pos)|num;

for(p=31;p>=0;p--)
{
printf("%d",num>>p&1);
}
printf("\n");

}
