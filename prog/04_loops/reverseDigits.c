#include <stdio.h>


int main() {
  int n, rightmostDigit;
  
  printf("Enter your number: ");
  scanf("%i", &n);
  while (n != 0) {
    rightmostDigit = n % 10;
    printf("%i", rightmostDigit);
    n /= 10;
  }
  printf("\n");

  return 0;
}
