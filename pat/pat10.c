#include<stdio.h>
void main()
{
int i,j,k,l;
for(i=0;i<5;i++)
{
for(j=0;j<4-i;j++)
printf(" ");
for(k=0;k<1+(2*i);k++)
printf("%d",k+1);

printf("\n");
}
for(i=0;i<4;i++)
{
for(j=0;j<1+i;j++)
printf(" ");
for(k=0;k<7-(2*i);k++)
printf("%d",k+1);

printf("\n");
}

}
