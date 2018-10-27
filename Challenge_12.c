// TASK
// Complete code for finding the sum of the first n natural numbers

#include <stdio.h>
int main()
{
    int n, count, sum = 0;

    printf("Enter the value of n positive integer: ");
    scanf("%d",&n);

    //CODE
    for(count=1;count<=n;++count)
    { sum=sum+count; }
    //Code Finished
    printf("Sum of first %d natural numbers is: %d",n, sum);

    return 0;
}
