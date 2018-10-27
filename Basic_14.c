// TASK
// Write code to find the average of the elements in an array
// Code Below
#include<stdio.h>
void main(){
 int arr[9] = {3,4,5,2,7,3,243,53,23} 
 int i,sum;
  for(i=0,i<=8,i++){
   sum += arr[i]; 
  }
  
  printf("sum of array is %d",sum);
}
