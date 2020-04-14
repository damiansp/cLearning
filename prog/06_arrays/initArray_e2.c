#include <stdio.h>


int main() {
  const int LEN = 10;
  int values[LEN];

  for (int i = 0; i < LEN; ++i) {
    values[i] = 0;
    printf("values[%i] = %i\n", i, values[i]);
  }

  return 0;
}
