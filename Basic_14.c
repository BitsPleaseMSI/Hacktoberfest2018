// TASK
// Write code to find the average of the elements in an array
// Code Below
#include<stdio.h>

void main()
{ int i,sum=0,a[5];
  
  for(i=0;i<5;++i)
  scanf("%d",a[i]);
 
 for(i=0;i<5;++i)
  sum=sum+a[i];
 
 printf("Average of the numbers : %d",sum/5);
}
