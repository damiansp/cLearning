#include <stdio.h>


long factorial(long n) {
  if (n <= 1) return 1;
  else return (n * factorial(n - 1));
}


int main() {
  for (int i = 0; i <= 10; i++) printf("%2d! = %ld\n", i, factorial(i));
  return 0;
}
