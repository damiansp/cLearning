#include <stdio.h>


int main() {
  int a, b;

  printf("Enter an integer: ");
  scanf("%d", &a);
  printf("Enter a divisor do determine if your number is an even multiple: ");
  scanf("%d", &b);
  if (a % b == 0) {
    printf("\n%d is evenly divisble by %d\n", a, b);
  } else {
    printf("\n%d is not evenly divisble by %d\n", a, b);
  }

  return 0;
}
