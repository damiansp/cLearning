#include <stdio.h>


int main() {
  int n, rightmostDigit;

  printf("Enter your number:\n> ");
  scanf("%i", &n);
  do {
    rightmostDigit = n % 10;
    printf("%i", rightmostDigit);
    n /= 10;
  } while (n != 0);
  printf("\n");

  return 0;
}
