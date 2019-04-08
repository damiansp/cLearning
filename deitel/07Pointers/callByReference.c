#include <stdio.h>


void cubeByReference(int* nPtr) { *nPtr = *nPtr * *nPtr * *nPtr; }


int main() {
  int n = 7;

  printf("n = %d\n", n);
  cubeByReference(&n); // updated in place
  printf("n^3 = %d\n", n);
  return 0;
}
