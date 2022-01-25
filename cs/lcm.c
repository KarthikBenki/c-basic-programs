#include <stdio.h>
void main() 
{
	int n1, n2, max,m,n;
	printf("Enter two positive integers: ");
	scanf("%d %d", &n1, &n2);

	max = (n1 > n2) ? n1 : n2;
while(2)
{
m=max%n1==0;
n=max%n2==0;
if(m&&n)
//if(max%n1==0&&max%n2==0)
{
			printf("The LCM of %d and %d is %d.", n1, n2, max);
goto p1;
}
max++;
}
p1:
printf("\n");
}
