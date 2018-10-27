//TASK
//Write code to demonstrate bubble sort


/* 

sort to ascending order using 
bubble sort
implemented in C
 
*/
  
  void main(){
   int arr[8]= {4,3,5,6,9,34,6,45};     // random jumbled array
    int i,len=0;
    
    len = sizeof(arr[])/sizeof(arr[0]);
    bubsort(arr[8],len);

   for (i=0,i < len,i++){                // prints result to console
       printf("%d ", arr[i]);  
     }
    }
 

int bubsort(int arr[],int len_arr)
  {
    int i,j;
    for(i=0,i<(len_arr-1),i++){
      
           for(j=0,j < n-i-1,j++){
       
        if(arr[j] < arr[j+1],j++)        // had to google this part
         swap(&arr[j],&arr[j+1]);
        
                                 }
        
                             }
    
    
}
  
  void swap(int *x, int *y) 
{ 
    int k = *x; 
    *x = *y; 
    *y = k; 
} 




