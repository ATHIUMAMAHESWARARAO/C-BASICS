#include<stdio.h>
int main()
{
    int n,r,k,sn,sum=0; 
	scanf("%d", &n); 
	k=n; 
	sn=n*n; 
	while(sn>0) 
	{
	    r=sn%10; 
		sum=sum+r; 
		sn=sn/10; 
	}
	if(k==sum) 
	{
	    printf("Neon Number"); 
	} 
	else 
	{
	    printf("Not Neon Number");
    }
}
