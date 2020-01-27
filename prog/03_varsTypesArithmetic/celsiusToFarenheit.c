#include <stdio.h>

double f2c (double degrees) {
  return (degrees - 32.0) / 1.8;
}


int main() {
  double degreesF = 27;
  printf("%.2f F = %.2f C\n", degreesF, f2c(degreesF));
}
