// TASK
// Swap using 2 variables only

#include <stdio.h>
int main() {
	int tmp;
  int a = 12;
  int b = 42;
  printf("Value of a & b is : %d  %d\n",a,b);

  //SWAP
  a = a + b;
  b = a - b;
  a = a - b;

  printf("After Swapping\n");
  printf("Value of a & b is : %d  %d\n",a,b);
	return 0;
}
