/* Get the GCD of two non-negative ints */
#include <stdio.h>


int gcd(int u, int v) {
  int temp;

  while (v != 0) {
    temp = u % v;
    u = v;
    v = temp;
  }
  return u;
}


int main() {
  int result,
    a,
    b;

  a = 150;
  b = 35;
  result = gcd(a, b);
  printf("The GCD of %i and %i is: %i\n", a, b, result);

  a = 1026;
  b = 404;
  result = gcd(a, b);
  printf("The GCD of %i and %i is: %i\n", a, b, result);

  a = 88;
  b = 244;
  result = gcd(a, b);
  printf("The GCD of %i and %i is: %i\n", a, b, result);

  return 0;
}
