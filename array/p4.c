/*4) Write a C program to findout second largest and second smallest elements of an
unsorted array without using any Sorting Technique.*/

#include<stdio.h>
void main()
{
	int a[10]={23,12,13,41,55,62,75,56,43,89},i,j,k,ele,l,sl,t,t1,s,ss;

	ele = sizeof(a)/sizeof(a[9]);
	printf("enter the array of elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	for(i=0;i<ele;i++)
		printf("a[%d]=%d ",i,a[i]);

	printf("\n");

	s=l=a[0];
	ss=sl=a[1];
	if(l<sl)
	{
		t=l;
		l=sl;
		sl=t;
	}
	if(s>ss)
	{
		t1=s;
		s=ss;
		ss=t1;
	}

	for(i=2;i<ele;i++)
	{
		if(a[i]>l)
		{
			sl=l;
			l=a[i];
		}
		else if(a[i]>sl)
			sl=a[i];
		if(a[i]<s)
		{
			ss=s;
			s=a[i];
		}
		else if(a[i]<ss)
			ss=a[i];


	}
	printf("the second largest element in the given array is sl=%d\n",sl);
	printf("the second smallest element in the given array is ss=%d\n",ss);
}
