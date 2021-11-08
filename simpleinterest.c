#include<stdio.h>
void main()
{
	int p, s, t; 
	p=10000;
	t=2;
	float r=7.5;
	s=p*r/100*t;
	
	printf("the simple interest when\n");
	printf("the principle amount is %d\n", p);
	printf("time in years in %d\n", t);
	printf("rate of interest is %f\n", r);
	printf("the simple interest is %d", s);

}
