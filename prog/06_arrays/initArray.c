#include <stdio.h>


int main() {
  int arrayVals[10] = {0, 1, 4, 9, 16};
  int i;

  for (i = 5; i < 10; ++i) {
    arrayVals[i] = i * i;
  }
  for (i = 0; i < 10; ++i) {
    printf("ArrayVals[%i] = %i\n", i, arrayVals[i]);
  }

  return 0;
}
