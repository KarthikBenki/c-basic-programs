#include<stdio.h>
int swap(int *,int *);
void main()
{
	int n1,n2;
	printf("enter the numbers\n");
	scanf("%d%d",&n1,&n2);
	printf("before swap n1=%d,n2=%d\n",n1,n2);
	swap(&n1,&n2);
	printf("after swap n1=%d,n2=%d\n",n1,n2);
	printf("\n");
}
int swap(int *p,int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;

	return *p;
	return *q;


}
