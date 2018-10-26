// TASK
// Write code to add two 2D Matrix
// Code Below
#include<stdio.h>
#include<conio.h>
void main()
{int A[5][4]={{1,2,3,4,5},{6,7,8,9,10},{2,5,7,4,8},{13,23,54,6,7}},B[5][4]={{2,4,6,8,10},{1,3,5,7,9},{14,35,57,68,79},{2,5,76,89,0}},C[5][4],i,j;
 for (i=0;i<5;i++)
 {for (j=0;j<4;j++)
   C[i][j]=A[i][j]+B[i][j];
 }
getch();
} 
