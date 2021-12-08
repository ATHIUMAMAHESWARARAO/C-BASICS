#include<stdio.h>
void main()
{
	int eng, mat, phy, che, cs, total;
	double perc;
	printf("enter marks eng, mat, phy, che, cs");
	scanf("%d%d%d%d%d", &eng, &mat, &phy, &che, &cs);
	total = eng + mat + phy + che + cs;
	perc = (total*1.0/5);
	
	if(eng>=35 && mat>=35 && phy>=35 && che>=35 && cs>=35)
	{
		printf("Results: pass\n");
		printf("total marks out of 500 is %d\n", total);
		printf("Percentage: %f\n", perc);
		printf("Grade: ");
		if(perc>=90)
		{
			printf("O");
		}
		else if(perc>=80)
		{
			printf("A");
		}
		else if(perc>=70)
		{
			printf("B");
		}
		else if(perc>=60)
		{
			printf("C");
		}
		else if(perc>=50)
		{
			printf("D");
		}
		else if(perc<=40)
		{
			printf("F");
		}
	}
	else
	{
		printf("fail");
	}
}
	
	
