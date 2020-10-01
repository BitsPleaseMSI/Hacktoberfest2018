
// TASK
// Write code to demostrate goto loop
// Code Below

#include <stdio.h>
int main()
{
   int sum=0;
   for(int i = 0; i<=10; i++){
	sum = sum+i;
	if(i==5){
	   goto addition;
	}
   }

   addition:
   printf("%d", sum);

   return 0;
}
