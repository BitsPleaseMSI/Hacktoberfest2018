// TASK
// Complete the code for finding the largest of three given numbers
#include<stdio.h>
int main()
{
   int num1,num2,num3;

   printf("\nEnter value of num1, num2 and num3:");

   scanf("%d %d %d",&num1,&num2,&num3);

   if(num1>num2 && num1>num3)
      printf("\n Number1 is greatest");
   else if(num2>num1 && num2>num3)
      printf("\n Number2 is greatest");
   else
      printf("\n Number3 is greatest");
   return 0;
}
