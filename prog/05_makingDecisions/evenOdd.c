#include <stdio.h>


int main() {
  int n, remainder;

  printf("Enter number to be tested: ");
  scanf("%i", &n);
  remainder = n % 2;
  if (remainder == 0) { printf("The number is even\n"); }
  else { printf("The number is odd\n"); }

  return 0;
}
