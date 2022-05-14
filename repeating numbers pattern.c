#include<stdio.h>
int main()
{
    int i,j,n,a;
	scanf("%d",&n);
	a=n-(n-1);
	{
	while(n>=a)
	{
	    for(i=n;i>=1;i--)
		{
		    printf("%d ",i);
		}printf("\n");
		a++;
	}
    }
}
