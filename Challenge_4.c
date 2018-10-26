// TASK
//
// Complete the program to calculate factorial of a number

#include <stdio.h>

unsigned int factorial(unsigned int num){
  if (num > 1)
    return num * factorial(num - 1);
  else
    return 1;
}

int main()
{
    unsigned int num = 10;
    printf("The factorial of number is 5 is : %d\n",factorial(5));
    return 0;
}

