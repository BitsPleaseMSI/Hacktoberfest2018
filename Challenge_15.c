#include <stdio.h>
int main()
{
   int num1, num2, flag_var, i, j;

   printf("Enter two range(input integer numbers only):");

   scanf("%d %d", &num1, &num2);


   printf("Prime numbers from %d and %d are:\n", num1, num2);

   //CODE
   for(i=num1;i<=num2;++i)
   {  flag_var=1;
      for(j=2;j<=i/2;++j)
      {  if(i%j==0)
          {  flag_var=0; break; }
      }
    if(flag_var==1) printf("%d, ",i);
   }
          

  return 0;
}
