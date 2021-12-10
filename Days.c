#include<stdio.h>
void main()
{
	int day;
	printf("Enter the number which day you want:");
	scanf("%d",&day);
	if(day==1)
	{
		printf("%d is sunday",day);
	}
	else if(day==2)
	{
		printf("%d is monday",day);
	}
	else if(day==3)
	{
		printf("%d is tuesday",day);
	}
	else if(day==4)
	{
		printf("%d is wednesday",day);
	}
	else if(day==5)
	{
		printf("%d is thursday",day);
	}
	else if(day==6)
	{
		printf("%d is friday",day);
	}
	else if(day==7)
	{
		printf("%d is saturday",day);
	}
	else
	{
		Printf("please enter valid number");
	}
}
