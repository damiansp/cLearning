#include <stdio.h>


void sort(int a[], int n) {
  for (int i = 0; i < n - 1; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (a[i] > a[j]) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}


int main() {
  int i;
  int arr[16] = {1, 2, 34, 5678, -9012345, 67890, -9, -87654321, 0, -1, 2,
                 45, 67890, -2, 56, -78901};
  
  printf("Array:\n");
  for (i = 0; i < 16; ++i) { printf("%i ", arr[i]); }
  sort(arr, 16);
  printf("\nSorted:\n");
  for (i = 0; i < 16; ++i) { printf("%i ", arr[i]); }
  printf("\n");
  return 0;
}
