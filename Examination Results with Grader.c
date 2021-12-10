#include<stdio.h>
void main()
{
	int E,P,M,C,CS,tot;
	float per;
	printf("Enter Marks:");
	scanf("%d%d%d%d%d",&E,&P,&M,&C,&CS);
	tot=E+P+M+C+CS;
	per=tot*1.0/5;
	if(E>35 && P>35 && M>35 && C>35 && CS>35)
	{
		printf("pass");
		if(per>=90)
		{
			printf("O Grade and percentage is %f\n",per);
		}
		else if(per>=80)
		{
			printf("A Grade and percentage is %f\n",per);
		}
		else if(per>=70)
		{
			printf("B Grade and  percentage is %f\n",per);
		}
		else if(per>=60)
		{
			printf("C Grade and percentage is %f\n",per);
		}
		else if(per>=50)
		{
			printf("D Grade and percentage is %f\n",per);
		}
		else if(per<50)
		{
			printf("E Grade and percentage is %f\n",per);
		}
}
	else
	{
		printf("fail\n");
		if(E<35)
		{
			printf("In English you have failed by %d Marks \n",35-E);
		}
		if(P<35)
		{
			printf("In Physics you have failed by %d Marks \n",35-P);
		}
		if(M<35)
		{
			printf("In Maths you have failed by %d Marks \n",35-M);
		}
		if(C<35)
		{
			printf("In Chemistry you have failed by %d Marks \n",35-C);
		}
		if(CS<35)
		{
			printf("In Computer science you have failed by %d Marks\n ",35-CS);
		}
	}       
} 
			
	
