#include <stdio.h>


double polynomial3(
    double coef3, double coef2, double coef1, double coef0, double x) {
  return (coef0 + coef1*x + coef2*x*x + coef3*x*x*x);
}


int main() {
  double x = 2.55,
    c0 = 6,
    c1 = 0,
    c2 = -5,
    c3 = 3;
  printf("For x = %.2f:\n3x^3 - 5x^2 + 6 = %.2f\n",
         x,
         polynomial3(c3, c2, c1, c0, x));
  
  return 0;
}
