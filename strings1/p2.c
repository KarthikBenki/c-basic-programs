/*2) Write a one line code to copy the string into another buffer.*/
#include<stdio.h>
void main()
{
	int i,j,k,ele;
	printf("enter the number of elements\n");
	//scanf("%d",ele);
	char a[10],b[10];
	printf("enter the elements in string\n");
	scanf("%s",a);
	printf("%s\n",a);
	for(i=0;a[i];i++)
		b[i]=a[i];

	b[i]=a[i];
	printf("a=%s b=%s\n",a,b);

}
