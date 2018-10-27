//TASK
//Find the largest element in the array

#include <stdio.h>

int largest_element(int arr[], int num)
{
    int i,k;
    
    for(i=0,i<n,i++){
        if(k>arr[i])
           continue;
        else
           k=arr[i];
        
        return k;
    }
    //CODE
}

int main()
{
    int arr[] = {1, 24, 145, 20, 8, -101, 300};
    int n = sizeof(arr)/sizeof(arr[0]); // length of array ?
    printf("Largest element of array is %d", largest_element(arr, n));
    return 0;
}
