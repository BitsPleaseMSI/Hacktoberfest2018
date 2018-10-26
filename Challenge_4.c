// TASK
//
// Complete the program to calculate factorial of a number

#include <stdio.h>

int factorial(int num,int a){
a = a*num;
    num = num-1;
    if(num==1)
        break;
    factorial(num,a);
}

int main()
{
    int num = 10;
    printf("The factorial of number is 5 is : %d\n",factorial(5,1));
    return 0;
}
