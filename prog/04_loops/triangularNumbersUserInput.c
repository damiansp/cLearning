#include <stdio.h>


int getTriangularNumber(int n) {
  int sum = 0;
  for (int i = 1; i <= n; ++i) {
    sum += i;
  }
  return sum;
}


int main() {
  int n = 200,
    input,
    triangularNumber = 0;

  printf("What triangular number do you want? ");
  scanf("%i", &input);
  printf("\nTriangular number %i is %i\n", input, getTriangularNumber(input));

  return 0;
}
