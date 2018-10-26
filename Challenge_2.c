// TASK
//
// 1. Create an array in function f() and g() of size 3
// 2. assign the array to a and b respectively

#include <stdio.h>
#include <stdlib.h>

int *a, *b;

void f(int x) {
  a = malloc(3 * sizeof(int));
  a[0] = a[1] = a[2] = x;
}

void g(int x) {
  b = malloc(3 * sizeof(int));
  b[0] = b[1] = b[2] = x;
}

int main() {
  f(1);
  printf("a = {%d,%d,%d}\n", a[0], a[1], a[2]);
  g(2);
  printf("b = {%d,%d,%d}\n", b[0], b[1], b[2]);
  return 0;
}
