#include<stdio.h>
void main()
{
int a, b, sum, dif, pro, quo, rem, art;

a = 10;
b = 20;

sum = a+b;
dif = a-b;
pro = a*b;
quo = a/b;
rem = a%b;
art = sum+dif+pro+quo+rem;

printf("sum of %d and %d is:%d\n", a, b, sum);
printf("diffference of %d and %d is:%d\n", a, b, dif);
printf("product of %d and %d is:%d\n", a, b, pro);
printf("quotient of %d and %d is:%d\n", a, b, quo);
printf("reminder of %d and %d is:%d\n", a, b, rem);
printf("sum of arithemetic operation and is:%d", sum+dif+pro+quo+rem, art);
	    
}
