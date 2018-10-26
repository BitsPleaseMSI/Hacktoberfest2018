// TASK
// Write code to perform arithmetic operations using a switch case
// Code Below
#include<stdio.h>
#include<conio.h>
void main()
{int a=24,b=96,sum,product,difference,quotient,remainder,choice=1;
 switch (choice)
 {case 1:sum=a+b;
         printf("%d is the sum",sum);
         break;
  case 2:if (a<b)
          difference=a-b;
         else if (b>a)
          difference=b-a;
         printf("%d is the differnce",difference);
         break;    
  case 3:quotient=a/b;
         printf("%d is the quotient",quotient);
         break; 
  case 4:remainder=a%b;
         printf("%d is the remainder",remainder);
         break;   
 }
getch();
}
