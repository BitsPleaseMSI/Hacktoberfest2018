// TASK
// Complete code for finding the sum of the first n natural numbers

#include <stdio.h>
int main()
{
    int i,n, count, sum = 0;

    printf("Enter the value of n positive integer: ");
    scanf("%d",&n);

    //CODE
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        if(a==i)
        {
            printf("%d=",i);
        }
        else
        {
            printf("%d*",i);
        }   
            
    }    

    printf("Sum of first %d natural numbers is: %d",n, sum);

    getch();
}
