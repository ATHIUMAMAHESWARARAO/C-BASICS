#include<stdio.h>
int main()
{
    int l,b,w,c,x,y,z,o,p,q; 
	scanf("%d%d%d%d", &l, &b, &w, &c); 
	o=l+2*w; 
	p=b+2*w; 
	x=l*b; 
	y=o*p; 
	z=y-x; 
	q=z*c; 
	printf("%d", q);
}
