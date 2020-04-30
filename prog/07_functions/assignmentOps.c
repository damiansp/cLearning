#include <stdio.h>


void dubble(float array[], int n) {
  for (int i = 0; i < n; ++i) {
    array[i] *= 2;
  }
}


int main() {
  float arr[4] = {1.2f, 3.45f, 67.8f, 90.12f};

  dubble(arr, 4);
  for (int i = 0; i < 4; ++i) { printf("%.2f  ", arr[i]); }
  printf("\n");
  return 0;
}
