#include<stdio.h>
void main()
{
	int x=10, y=4, z=3;
	x+=y;
	y-=z;
	z+=x;
	y*=x;
	x*=z;
	
	printf("%d %d %d", x, y, z);
	
}
