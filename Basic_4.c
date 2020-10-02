// TASK
// Write code to perform selection sort
// Code Below

//This is the function for selection sort

void selectionSort(int arr[], int n) 
{ 
    int i, j, min; 
    for (i = 0; i < n-1; i++) 
    {
        min = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_idx]) 
            min = j; 
        arr[min]=arr[min]+arr[i];
        arr[i]=arr[min]-arr[i];
        arr[min]=arr[min]-rr[i];
    } 
} 
