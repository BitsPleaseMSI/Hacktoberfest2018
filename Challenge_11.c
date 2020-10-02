//TASK
//Find the largest element in the array

#include <stdio.h>

int largest_element(int arr[], int num)
{
    //CODE
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}

int main()
{
    int arr[] = {1, 24, 145, 20, 8, -101, 300};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Largest element of array is %d", largest_element(arr, n));
    return 0;
}
