#include<stdio.h>
void main()
{
    int n=0xf0000000,m=0x0000000f,pos,num;
    printf("enter the number\n");
    scanf("%d",&num);
    printf("the binary before swapping nibbles\n");
    for(pos=31;pos>=0;pos--)
    printf("%d",num>>pos&1);

    printf("\n");

    num=((num&n)>>28)|((num&m)<<28);

    printf("the binary after swapping nibbles\n");
     for(pos=31;pos>=0;pos--)
    printf("%d",num>>pos&1);

    printf("\n");


}