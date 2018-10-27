// TASK
// Write code to add two 2D Matrix
// Code Below

#include<stdio.h>

void main()
  {
   int a[2][2],b[2][2],c[2][2],i,j;
  for(i=0;i<2;++i)
    for(j=0;j<2;++j)
      scanf("%d",a[i][j]);
  
for(i=0;i<2;++i)
    for(j=0;j<2;++j)
      scanf("%d",b[i][j]);
  //Code
  for(i=0;i<2;++i)
    for(j=0;j<2;++j)
      c[i][j]=a[i][j]+b[i][j];
  
for(i=0;i<2;++i)
    for(j=0;j<2;++j)
      printf("%d",c[i][j]);
}
