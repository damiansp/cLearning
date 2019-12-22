#include <stdio.h>


void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}


int main() {
  int a = 3;
  int b = 4;

  printf("Start:\n a = %d\n b = %d\n\nSwap...\n", a, b);
  swap(&a, &b);
  printf(" a = %d\n b = %d\n", a, b);
}
