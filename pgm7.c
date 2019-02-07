#include<stdio.h>
void main()
{
	clrscr();
	int yr;
	printf("Enter year :");
	scanf("%d",&yr);
	if((yr%4==0) && (yr%100!=0))
	{
		printf("This is a Leap Year");
	}
	else if((yr%100==0) && (yr%400==0))
	{
		printf("This is a Leap Year");
	}
	else if(yr%400==0)
	{
		printf("This is a Leap Year");
	}
	else
	{
		printf("This is not a Leap Year");
	}
}
