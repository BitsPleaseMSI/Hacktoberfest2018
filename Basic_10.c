// TASK
// Write code to find transpose of a 2D matrix
// Code Below
#include<stdio.h>
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
int main(){
  int ar[20][20],r,c;
  scanf("%d %d",&r,&c);
  for(i=0;i<r;i++)
  {
     for(j=0;j<c;j++)
     { 
       scanf("%d",ar[i][j]);
     }
  }
  transpose(ar,r,c);
  return 0;
}
