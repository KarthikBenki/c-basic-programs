//Write a recursive function that displays a positive integer in words. For ex: if the 
// integer is 3412 then it is displayed as three four one two.
#include<stdio.h>
void words(int);
void main()
{
	int num,s=0,r;
	printf("enter the num...\n");
       	scanf("%d",&num);
    
	while(num)
	{
		r=num%10;
		s=s*10+r;
		num=num/10;
	}
        printf("%d ",s);
	words(s);
}
void words(int num)
{
	int r;
	if(num)
	{
		r=num%10;
		switch(r)
		{
			case 0:printf("zero ");
			       break;
			case 1:printf("one ");
			       break;
			case 2:printf("two ");
			       break;
			case 3:printf("three ");
			       break;
			case 4:printf("four ");
			       break;
			case 5:printf("five ");
			       break;
			case 6:printf("six ");
			       break;
			case 7:printf("seven ");
			       break;
			case 8:printf("eight ");
			       break;
			case 9:printf("nine ");
			       break;

		}
		words(num/=10);
	}
	/* if(num)
	   {
	   if(num%10==0)
	   printf("zero ");
   else if(num%10==1)
   printf("one ");
   else if(num%10==2)
   printf("two ");
   else if(num%10==3)
   printf("three ");
   else if(num%10==4)
   printf("four ");
   else if(num%10==5)
   printf("five ");
   else if(num%10==6)
   printf("six ");
   else if(num%10==7)
   printf("seven ");
   else if(num%10==8)
   printf("eight ");
   else if(num%10==9)
   printf("nine ");
   words(num/=10);
}*/
}
   
   
 
