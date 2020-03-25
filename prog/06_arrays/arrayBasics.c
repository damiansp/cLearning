#include <stdio.h>


int main() {
  const int LEN = 10;
  int values[LEN];

  values[0] = 198;
  values[2] = -100;
  values[5] = 350;
  values[3] = values[0] + values[5];
  values[9] = values[5] / 10;
  --values[2];

  for (int i = 0; i < LEN; ++i) {
    printf("values[%i] = %i", i, values[i]);
    if (i == 1 || i == 4 || i == 6 || i == 7 || i == 8) {
      printf(" (never initialized)");
    }
    printf("\n");
  }

  return 0;
}
