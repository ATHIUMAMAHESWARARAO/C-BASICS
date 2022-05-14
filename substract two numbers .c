#include<stdio.h>
int main()
{
    int a,r,m=1,s=0; 
	scanf("%d", &a); 
	while (a>0) 
	{ 
	    r=a%10; m *= r; 
		s += r; 
		a=a/10; 
	}
    printf("%d", m-s); 
}
