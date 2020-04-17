/* Get the GCD of two non-negative ints */
#include <stdio.h>


void gcd(int u, int v) {
  int temp;

  printf("The GCD of %i and %i is: ", u, v);
  while (v != 0) {
    temp = u % v;
    u = v;
    v = temp;
  }
  printf("%i\n", u);
}


int main() {
  gcd(150, 35);
  gcd(1026, 405);
  gcd(83, 240);
  gcd(123456, 987654);
}
