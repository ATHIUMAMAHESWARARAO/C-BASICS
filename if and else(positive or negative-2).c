#include<stdio.h>
void main()
{
	int n;
	printf("positive or negative");
	scanf("%d", &n); //n=-6
	if (n>0)
	{
		printf("%d is positive", n);	
	}
	
	else
    {
    	printf("%d is negative");
	}
}
