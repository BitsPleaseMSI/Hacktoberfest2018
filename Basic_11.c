// TASK
// Write code to perform arithmetic operations using a switch case

#include<stdio.h>
void main()
{
   int a,b,n;
  scanf("%d%d",&a,&b);
  printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.remainder");
  scanf("%d",&n);
  switch(n)
  {
      case 1:printf("%d",a+b);
            break;
      case 2:printf("%d",a-b);;
            break;
      case 3:printf("%d",a*b);;
            break;
      case 4:printf("%d",a/b);
            break;
      case 5:printf("%d",a%b);
            break;
      default:printf("Wrong Choice....");
  }    
}
