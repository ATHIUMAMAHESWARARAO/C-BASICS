#include<stdio.h>
int main()
{
    int n, ld=0,r; 
	scanf("%d", &n); 
	while(n>0) 
	{
	    r=n%10; 
		if(r>ld) 
		ld=r; 
		n=n/10; 
	}
	printf("%d",ld);
}
