#include<stdio.h>
int main()
{
    int a,r,m=1,s=0; 
	scanf("%d", &a); 
	while (a!=0) 
	{
	    r=a%10; 
		s += r;  
		m *= r; 
		a /= 10; 
	} 
	if(s==m) 
	{
	    printf("Spy Number"); 
	}
	else
	{
	 printf("Not Spy Number");
	}
}
