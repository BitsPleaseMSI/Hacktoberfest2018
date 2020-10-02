// TASK
// Complete code for finding the sum of the first n natural numbers

#include <stdio.h>
int main()
{
    int n, count, sum = 0;

    printf("Enter the value of n positive integer: ");
    scanf("%d",&n);

    //code
    
    sum=(n*(n+1))/2;
    
    printf("Sum of first %d natural numbers is: %d",n, sum);
    return 0;
}
