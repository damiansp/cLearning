#include <stdio.h>


long fibonacci(long n) {
  if (n == 0 || n == 1) return n;
  else return fibonacci(n - 1) + fibonacci(n - 2);
}


int main() {
  long result;
  long n;

  printf("Enter an int: ");
  scanf("%ld", &n);
  result = fibonacci(n);
  printf("Fibonacci(%ld) = %ld\n", n, result);
  return 0;
}
