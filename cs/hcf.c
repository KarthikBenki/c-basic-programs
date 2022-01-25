#include<stdio.h>
void main()
{
int n1,n2,i,hcf;
printf("enter the two integers\n");
scanf("%d%d",&n1,&n2);
if(n1<0)
n1=-n1;
if(n2<0)
n2=-n2;
for(i=1;i<=n1&&i<=n2;i++)
{
if(n1%i==0&&n2%i==0)
hcf=i;
}
printf("hcf of two numbers %d and %d is %d\n",n1,n2,hcf);
}

