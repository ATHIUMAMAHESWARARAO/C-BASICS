#include<stdio.h>
void main()
{
	int number;
	printf("enter a number");
	scanf("%d", &number);
	switch(number%2)
	{
		case 0:
			printf("%d is even", number);
			break;
		case 1:
		    printf("%d is odd", number);
	}
}
