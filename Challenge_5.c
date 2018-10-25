// TASK
//
// Complete the Armstrong code

#include <stdio.h>
int main()
{
    int number, originalNumber, remainder, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &number);

    originalNumber = number;

    while (originalNumber != 0)
    {
      //code here
    }

    if(result == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);

    return 0;
}
