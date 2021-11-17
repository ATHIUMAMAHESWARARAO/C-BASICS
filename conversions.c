#include<stdio.h>
void main()
{
	int min, hrs, rem;
	
	min = 100;
	hrs = min/60;
	rem = min%60;
	
	printf("%d hour(s) %d minute(s)", hrs, rem);
}
