#include<stdio.h>
void main()
{
	int nat, evennat, oddnat, n;
	
	n=10;
	
	nat=(n*n+1)/2;
	evennat = n*n+1;
	oddnat = n*n;
	
	printf("sum of %d natural numbers is:%d\n", n, nat);
	printf("sum of %d even natural numbers is:%d\n", n, evennat);
	printf("sum of %d odd natural numbers is:%d\n", n, oddnat);
	
}
