#include<stdio.h>
void main()
{
int a[10],i,j,k,ele,c,flag;

ele=sizeof(a)/sizeof(a[0]);
printf("Enter the ele...\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
//////////////////////////////////////////////////

for(i=0;i<ele;i++)
{

	for(j=i-1,flag=0;j>=0;j--)
	{	if(a[i]==a[j])
		{	
		flag=1;
		break;
		}
	}
	if(flag==0)
	{
		for(k=i+1,c=0;k<ele;k++)
		{
			if(a[i]==a[k])
			c++;
		}
		printf("%d is repeated %d times\n",a[i],c);
	}

}
}





