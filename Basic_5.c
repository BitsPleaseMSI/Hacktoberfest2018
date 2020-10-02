// TASK
// Write code to demostrate goto loop
// Code Below
#include<iostream.h>
void lSearch(int ar[],int n,int x)
{
  for(int i=0;i<n;i++)
  {
    if(ar[i]==x)
    {
      cout<<"Element found";
      goto lbl;
    }
  }
  lbl:
}
