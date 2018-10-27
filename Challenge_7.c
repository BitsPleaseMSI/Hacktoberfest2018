#include <stdio.h>

int main()
{
    int number;

    printf("Please input an integer number:\n");
    scanf("%d",&number);

    () ? printf("%d is an EVEN Number.", number) :  printf("%d is an ODD Number.",number);

    // Hint:
    //
    // Every 0th bit of even number in binary is 0
    // Every 0th bit of odd number in binary is 1
    //
    // To check the 0th bit of number, use
    // Right Shift operator

    printf("\n");
    return 0;
}
