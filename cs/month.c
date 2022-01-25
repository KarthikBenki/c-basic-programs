//19) Accept a month in digit from the user. Display the month in words. If number is not
//between 1 and 12 display message “Invalid Month”. (Use ‘switch’)
#include<stdio.h>
void main()
{
	int n;
p1:
	printf("enter the number of a month\n");
	scanf("%d",&n);
	switch(n)
	{
		default :
			printf("invalid month\n");
			break;

		case 1:
			printf("JANUARY\n");
			break;
		case 2:
			printf("FEBURARY\n");
			break;
		case 3:
			printf("MARCH\n");
			break;
		case 4:
			printf("APRIL\n");
			break;
		case 5:
			printf("MAY\n");
			break;
		case 6:
			printf("JUNE\n");
			break;
		case 7:
			printf("JULY\n");
			break;
		case 8:
			printf("AUGUST\n");
			break;
		case 9:
			printf("SEPTEMBER\n");
			break;
		case 10:
			printf("OCTOBER\n");
			break;
		case 11:
			printf("NOVEMBER\n");
			break;
		case 12:
			printf("DECEMBER\n");
			break;



	}
if(n<=12)
goto p1;
}
