// TASK
// Write code to perform selection sort
// Code Below
#include<stdio.h>

void main()
{
  int a[10],min;
  for(i=0,i<10,++i)
    scanf("%d",a[i]);
  //code
     for (i=0; i<8; i++) 
    { 
        min=a[i]; 
        for (j=i+1 ; j<9; j++) 
          if (a[j] <min) 
          { swap=a[j];
            a[j]=min;
           f=j 
          }
       a[i]=a[f];
    } 
} 
