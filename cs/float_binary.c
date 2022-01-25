#include<stdio.h>
void main()
{
	int pos,i,c;
	float f=23.5;
	float *q;
	char *p;
	int *r;
	p=&f;
	q=&f;
	r=&f;
	printf("char = %c\n",*p);
	printf("float = %f\n",*q);
	printf("decimal equialent of float = %d\n",*r);
	printf("the binary output using int * ptr\n");
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",*r>>pos&1);
	}
	printf("\n");
	printf("the binary output using char * ptr\n");
	for(p=p+3,c=0;c<4;p--)
	{
		for(pos=7;pos>=0;pos--)
		{
			printf("%d",*p>>pos&1);
		}
		c++;
	}
	printf("\n");
}


