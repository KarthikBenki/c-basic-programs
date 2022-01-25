#include<stdio.h>
void main()
{
    int i,j,k,n;
printf("enter the generic value\n");
scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    {
        for(j=0;j<(n-1)-i;j++)
        printf(" ");
    }
    for(k=0;k<1+i;k++)
    {
        printf("* ");
    }
    printf("\n");
    }
    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<1+i;j++)
        {
            printf(" ");
        }
        for(k=0;k<(n-1)-i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }


}
