#include <stdio.h>

int main()
{
    int number;

    printf("Please input an integer number:\n");
    scanf("%d",&number);

    // alternative test using bitwise AND: ((number & 1) == 0)

    // requested test: 
    //   drop last bit by shifting one position to the right
    //   then shift back which sets the 0th bit to 0 and 
    //   compare the shifted value with the original value
    (((number >> 1) << 1) == number) ? printf("%d is an EVEN Number.", number) :  printf("%d is an ODD Number.",number);

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
