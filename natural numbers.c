#include<stdio.h>
void main()
{
	int n, m, nat, natnum;
	
	n = 5;
	m = 10;
	
	nat = (n*(n+1))/2;
	natnum = (m*(m+1))/2;
	
	printf("sum of first 5 natural numbers is:%d\n", nat);
	printf("sum of first 10 natural numbers is:%d", natnum);
}
