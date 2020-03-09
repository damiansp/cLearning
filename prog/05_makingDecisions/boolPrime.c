// Generate a table of prime numbers
#include <stdio.h>


int main() {
  _Bool isPrime;

  for (int p = 2; p <= 100; ++p) {
    isPrime = 1;
    for (int d = 2; d < p; ++d) {
      if (p % d == 0) {
        isPrime = 0;
      }
    }
    if (isPrime != 0) {
      printf("%3i ", p);
    }
  }
  printf("\n");

  return 0;
}
