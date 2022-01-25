#include<stdio.h>
void main()
{
int i,j,k,l;
for(i=0;i<6;i++)
{
for(j=0,k=1,l=2;j<1+i;j++,k=k+2,l=l+2)
{
if(i%2==0)
printf("%d",k);
else
printf("%d",l);
}
printf("\n");
}

}
