#include <stdio.h>

double x;
static double result;


static void doSquare() {
  double square();

  x = 2.0;
  result = square();
}


int main() {
  doSquare();
  printf("%g\n", result);
  return 0;
}
