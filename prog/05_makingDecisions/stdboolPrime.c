// Generate a list of primes
#include <stdio.h>
#include <stdbool.h>


int main() {
  bool isPrime;

  for (int p = 2; p <= 100; ++p) {
    isPrime = true;
    for (int d = 2; d < p; ++d) {
      if (p % d == 0) {
        isPrime = false;
      }
    }
    if (isPrime) {
      printf("%i ", p);
    }
  }
  printf("\n");

  return 0;
}
