#include <stdio.h>


int main() {
  int a, b;

  printf("Enter an integer: ");
  scanf("%d", &a);
  printf("...and a number to divide it by: ");
  scanf("%d", &b);

  if (b == 0) {
    printf("Division by 0 is undefined\n");
  } else {
    double res = (double) a / b;
    printf("The result, to 4 decimal places of accuracy is:\n   %.4f\n", res);
  }

  return 0;
}
