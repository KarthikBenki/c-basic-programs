#include<stdio.h>
void main()
{
int i,j,k,l;

for(i=0;i<6;i++)
{
for(j=0,k=1;j<1+i;j++,k++)
{
printf("%d ",(i+1)*k);

}
printf("\n");
}
}
