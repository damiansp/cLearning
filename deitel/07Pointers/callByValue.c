#include <stdio.h>


int cubeByValue(int n);


int main() {
  int n = 5;

  printf("n = %d\n", n);
  n = cubeByValue(n);
  printf("n^3 = %d\n", n);
  return 0;
}


int cubeByValue(int n) { return n * n * n; }
