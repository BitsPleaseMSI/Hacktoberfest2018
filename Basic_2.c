// TASK
// Write code to find if the number is positive or negative
// Code Below
#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int a,b,c;
  printf("enter the no. to check whether it is positive or not = ");
  scanf("%d",&a);
  if(a>=0)
  {
    printf("no. is positive");
  }
  else
  {
    printf("no. is negative");
  }
  getch();
}  
