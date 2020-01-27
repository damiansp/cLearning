#include <stdio.h>


int getTriangularNumber(int n) {
  int sum = 0;
  for (int i = 1; i <= n; ++i) {
    sum += i;
  }
  return sum;
}


int main() {
  int n = 200;
  int triangularNumber = getTriangularNumber(n);

  printf("The %dth triangular number is %d\n", n, triangularNumber);

  return 0;
}
