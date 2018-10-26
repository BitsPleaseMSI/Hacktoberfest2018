// TASK
//
// Complete the program to calculate factorial of a number

#include <stdio.h>

int factorial(int num){
     int x;
    if(num > 1)
        return num*factorial(num-1);
    else 
        return 1;
}

int main()
{
    int num = 10;
    printf("The factorial of number 5 is : "%d\n",factorial(5));
    return 0;
}

