#include <stdio.h>


int main() {
  int sum = 0;
  for (int n = 2; n <= 100; n += 2) sum += n;
  printf("Sum of even numbers 2 ~ 100 = %d\n", sum);
  return 0;
}
