#include<stdio.h>
#include<math.h>
int main()
{
    int i, n, found=0; 
	scanf("%d", &n); 
	for(i=2; i<=sqrt(n); i++) 
	{ 
	if(n%i==0) 
	{
	    found=1; 
		break; 
	} 
	} 
	if(found==0) 
	printf("prime"); 
	else 
	printf("not a prime");
}
