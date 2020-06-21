#include <stdio.h>


int sumArray(int array[], const int n) {
  int sum = 0,
    *ptr;
  int *const arrayEnd = array + n;

  for (ptr = array; ptr < arrayEnd; ++ptr) sum += *ptr;
  return sum;
}


int main() {
  int values[10] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
  printf("The sum is %d\n", sumArray(values, 10));
  return 0;
}
