#include <stdio.h>


int main() {
  struct intPtrs {
    int *p1;
    int *p2;
  };

  struct intPtrs pointers;
  int i1 = 100,
    i2;

  pointers.p1 = &i1; // pointers.(*p1) = i1; *p1 = 100
  pointers.p2 = &i2; // *p2 = null
  *pointers.p2 = 97; // i2 = 97

  printf("i1: %d, *pointers.p1: %d\n", i1, *pointers.p1); // 100, 100
  printf("i2: %d, *pointers.p2: %d\n", i2, *pointers.p2); // 97, 97
  return 0;
}
