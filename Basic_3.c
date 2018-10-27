// TASK
// Write code to find if the number is present in the array or not
// Code Below
#include<stdio.h>

void main()
{ int f=0,a[10],n;
 
  for(i=0;i<10;++i)
  { scanf("%d",&a[i]); }
 
 printf("Enter number to search ");
 scanf("%d",&n);
 
  for(i=0;i<10;++i)
  { if(n==a[i])
  { printf("Number Found"); f=1; break;}
  }
 if(f!=1) printf("Not found");
}
