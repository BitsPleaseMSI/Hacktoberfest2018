// TASK
// Write code to factors of a number
// Code Below
#include<stdio.h>
void main()
{
 int n,i;
  scanf("d",&n);
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
      printf("%d",i);
  }
}
