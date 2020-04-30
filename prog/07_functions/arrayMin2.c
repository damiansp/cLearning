#include <stdio.h>

int minimum(int vals[], int len) {
  int minVal = vals[0];

  for (int i = 1; i < len; ++i) {
    if (vals[i] < minVal) { minVal = vals[i]; }
  }
  return minVal;
}


int main() {
  int arr1[5] = {1, 23, 456, 7, 89};
  int arr2[7] = {-12, 3, 45, 678, 9, -1, 234};

  printf("Arr1 min: %i\n", minimum(arr1, 5));
  printf("Arr2 min: %i\n", minimum(arr2, 7));
  return 0;
}
