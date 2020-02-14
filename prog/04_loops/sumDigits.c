#include <stdio.h>


int main() {
  int n, rightmost;
  int sum = 0;

  printf("Enter your number:\n> ");
  scanf("%i", &n);
  do {
    rightmost = n % 10;
    sum += rightmost;
    n /= 10;
  } while (n != 0);
  printf("Sum is %d\n", sum);
  return 0;
}
