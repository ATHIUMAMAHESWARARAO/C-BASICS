#include<stdio.h>
int main()
{	
 int choice, ac, rc, bc, a, b;
 printf("enter your number");
 scanf("%d%d", &a, &b);
 printf("enter your choice:\n1. Arthematic Operators\n2. Relative Operators\n3. Bitwise Operators");	
 scanf("%d", &choice);	
 switch(choice)
 {		
  case 1:			
     printf("enter your choice\n1. +\n2. -\n3. *\n4. /\n5. %%");			
     scanf("%d", &ac);
     switch(ac)			
     {				
      case 1:		
     	 printf("%d + %d = %d", a, b, a+b);	
         break;			
      case 2:				
         printf("%d - %d = %d", a, b, a-b);		   
         break;			
      case 3:			
         printf("%d * %d = %d", a, b, a*b);		
         break;		
      case 4:				
         printf("%d / %d = %d", a, b, a/b);		
         break;		
      case 5:			
         printf("%d %% %d = %d", a, b, a%b);		
         break;		
     }
      break;		
  case 2:	
     printf("enter your choice\n1. >\n2. >=\n3. <\n4. <=\n5. ==\n6. !=");	
     scanf("%d", &rc);		;
     switch(rc)		
     {		  
      case 1:	
         printf("%d > %d = %d", a, b, a>b);		
         break;		
      case 2:			
         printf("%d >= %d = %d", a, b, a>=b);	
         break;			
      case 3:
         printf("%d < %d = %d", a, b, a<b);		
         break;		
      case 4:			
         printf("%d <= %d = %d", a, b, a<=b);
         break;		
      case 5:			
         printf("%d == %d = %d", a, b, a==b);		
         break;		
      case 6:			
         printf("%d != %d = %d", a, b, a!=b);	
         break;		
     }
      break;			
  case 3:		
     printf("enter your choice\n1. &\n2. |\n3. ^");	
     scanf("%d", &bc);			
     switch(bc)		
     {				
      case 1:			
         printf("%d & %d = %d", a, b, a&b);		
         break;			
      case 2:			
         printf("%d | %d = %d", a, b, a|b);		
         break;		
      case 3:				
         printf("%d ^ %d = %d", a, b, a^b);			
         break;			
     }
      break;
  }
}
