#include <stdio.h>


int sumArray(int *array, const int n) {
  int sum = 0;
  int *const arrayEnd = array + n;

  for (; array < arrayEnd; ++array) sum += *array;
  return sum;
}


int main() {
  int values[10] = {0, 1, 1, 2, 3, 5, 8, 13, 24, 37};

  printf("Sum: %d\n", sumArray(values, 10));
  return 0;
}
