#include <stdio.h>


int main() {
  int n, abs;

  printf("Type your number: ");
  scanf("%i", &n);
  abs = n < 0 ? -n : n;
  printf("|%d| = %d\n", n, abs);

  return 0;
}
