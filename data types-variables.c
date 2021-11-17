#include<stdio.h>
int main()
{
	int phy, che, mat, eng, tot;
	
	phy = 60;
	che = 50;
	mat = 70;
	eng = 40;
	
	tot=phy+che+mat+eng;
	
	printf("marks in physics : %d\n", phy);
	printf("marks in chemistry: %d\n", che);
	printf("marks in maths: %d\n", mat);
	printf("marks in english: %d\n", eng);
	printf("total: %d", tot);
}
