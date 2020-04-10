#include <stdio.h>


int main() {
  int i,
    nFibs;

  printf("How many Fibonacci numbers (1 - 75)? ");
  scanf("%d", &nFibs);
  if (nFibs < 1 || nFibs > 75) {
    printf("Bad input.");
    return 1;
  }

  unsigned long long int fibonacci[nFibs];
  fibonacci[0] = 0;
  fibonacci[1] = 1;
  for (i = 2; i < nFibs; ++i) {
    fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
  }
  for (i = 0; i < nFibs; ++i) {
    printf("%llu  ", fibonacci[i]);
  }
  printf("\n");
  return 0;
}
