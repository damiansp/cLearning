// Calculate the nth triangular no.
#include <stdio.h>


void getTriangularNumber(int n) {
  int tri = 0;

  for (int i = 1; i <= n; ++i) { tri += i; }
  printf("Triangular number %d is: %d\n", n, tri);
}


int main() {
  getTriangularNumber(10);
  getTriangularNumber(20);
  getTriangularNumber(50);

  return 0;
}
