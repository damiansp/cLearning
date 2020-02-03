#include <stdio.h>


int getTriangularNumber(int n) {
  int sum = 0;
  for (int i = 1; i <= n; ++i) {
    sum += i;
  }
  return sum;
}


int main() {
  int n,
    input,
    triangularNumber,
    counter;

  for (counter = 1; counter <= 5; ++counter) {
    printf("What triangular number do you want? ");
    scanf("%i", &input);
    triangularNumber = getTriangularNumber(input);
    printf("Triangular number %i is %i\n\n", input, triangularNumber);
  }
  
  return 0;
}
