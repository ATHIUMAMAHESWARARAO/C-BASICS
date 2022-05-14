#include<stdio.h>
int main()
{
    int p; 
	scanf("%d", &p); 
	while(p--) 
	{
	    int n, rev = 0; 
		scanf("%d", &n); 
		int temp=n; 
		while(n>0) 
		{
		    int rem=n%10; 
			rev = rev*10+rem; 
			n=n/10;
	    }
		if(temp==rev) 
		{
		    printf("True\n"); 
		}
		else 
		{
		    printf("False\n");
		}
	}
}
