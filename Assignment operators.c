#include<stdio.h>
void main()
{
	int x=20, y=8;
	x+=y; //x=28, y=8
	x-=y; //x=20, y=8
	x*=y; //x=160, y=8
	x/=y; //x=20, y=8
	x%=y; //x=4, y=8
	y+=x; //x=
	y-=x;
	y*=x;
	y/=x;
	y%=x;
	
	printf("%d %d", x, y);
	
}
