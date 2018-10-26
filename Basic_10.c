// TASK
// Write code to find transpose of a 2D matrix
// Code Below
void  transpose(int ar[5][],int r,int c)
{int i,j;
  for(i=0;i<c;i++)
  {
     for(j=0;j<r;j++)
     { 
       printf("%d",ar[j][i]);
     }
    printf("\n");
  }
}
