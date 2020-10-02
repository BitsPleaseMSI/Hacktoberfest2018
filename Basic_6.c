// TASK
// Write code to show a 2D matrix
// Code Below
//this is a c++ function to show 2D matrix
#include<iostream.h>
void showMat(int ar[][20],int r,int c)
{
  for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
      cout<<ar[i][j];
}
int main()
{
  int ar[20][20],r,c;
  cin>>r>>c;
  for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
      cin>>ar[i][j];
  showMat(ar,r,c);
  return 0;
}
