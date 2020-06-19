#include <stdio.h>


void swap(int* const p1, int* const p2) {
  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}


int main() {
  int i1 = 1,
    i2 = 100,
    *p1 = &i1,
    *p2 = &i2;

  printf("i1 = %d, i2 = %d\nSwapping...\n", i1, i2);
  swap(p1, p2);
  printf("i1 = %d, i2 = %d\nSwapping back via addresses...\n", i1, i2);
  swap(&i1, &i2);
  printf("i1 = %d, i2 = %d\n", i1, i2);
  return 0;
}
