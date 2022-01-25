#include<stdio.h>
void main()
{
int num,pos,pos1;
printf("enter the number\n");
scanf("%d",&num);
printf("enter the pos of bit");
scanf("%d",&pos);
printf("the binary of given number is\n");
for(pos1=31;pos1>=0;pos--)
printf("%d",num>>pos1&1);
printf("\n");
}