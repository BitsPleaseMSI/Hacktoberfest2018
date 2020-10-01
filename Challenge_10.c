// TASK
// Bubble Sort Algoritm

#include<stdio.h>
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
int main(){

   int count, temp, i, j, number[30];
   printf("Not
   printf("How many numbers are u going to enter?: ");
   scanf("%d",&count);

   printf("Enter %d numbers: ",count);

   for(i=0;i<count;i++)
      scanf("%d",&number[i]);

   //CODE
          
   for (i = 0; i < count-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < count-i-1; j++)  
           if (number[j] > numbere[j+1]) 
              swap(&number[j], &number[j+1]); 

   printf("Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0;
}
