// TASK
// Write code to add two 2D Matrix
// Code Below
void add_mat(int ar[][20],int r1,int c1,int arr[][20],int r2,int c2)
{
  if(r1==r2 && c1==c2)
    {
      for(int i=0;i<r1;i++)
      {
        for(int j=0;j<c1;j++)
        {
          cout<<ar[i][j]+arr[i][j];
        }
      }
  }
}
