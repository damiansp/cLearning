// Produce the first n Fibonacci Numbers
#include <stdio.h>


int main() {
  const int N = 15;
  int fib[N],
    i;

  fib[0] = 0;
  fib[1] = 1;
  for (i = 2; i < N; ++i) {
    fib[i] = fib[i - 2] + fib[i - 1];
  }
  for (i = 0; i < N; ++i) {
    printf("%i\n", fib[i]);
  }
}
