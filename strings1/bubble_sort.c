#include<stdio.h>
void print_array(const int *,int);
void bubble_sort(int *,int);

void main()
{
	int a[5]={30,70,50,25,32},ele;
	ele = sizeof(a)/sizeof(a[0]);
	printf("before bubble sort\n");
	print_array(a,ele);
	bubble_sort(a,ele);
	printf("after bubble sort\n");
	print_array(a,ele);
}
void bubble_sort(int *p,int ele)
{
	int i,j,t;
	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(p[j]>p[j+1])
			{
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}

		}

	}



}
void print_array(const int *p,int ele)
{
	int i;
	for(i=0;i<ele;i++)
		printf("a[%d]=%d ",i,p[i]);
	printf("\n");

}
