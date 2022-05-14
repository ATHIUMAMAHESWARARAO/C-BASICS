#include<stdio.h>
#include<math.h>
int main()
{
    int x, y, m, n,s; 
	scanf("%d%d%d", &x, &y, &m); 
	n=pow(x,y); 
	s=n%m; 
	if(s<=5) 
	{
	    printf("%d", s); 
	} 
	else 
	{ 
	    printf("%d", m); 
	}
}
