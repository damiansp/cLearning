#include <stdio.h>

#define SIZE 17


void swap(int* e1Ptr, int* e2Ptr) {
  int hold = *e1Ptr;
  *e1Ptr = *e2Ptr;
  *e2Ptr = hold;
}


void bubbleSort(int* const array, const int size) {
  int pass;

  for (pass = 0; pass < size - 1; pass++) {
    for (int i = 0; i < size - 1; i++) {
      if (array[i] > array[i + 1]) { swap(&array[i], &array[i + 1]); }
    }
  }
}


int main() {
  int a[SIZE] = {2, 10, 6, 9, 47, 7, 50, 91, 62, 74, 76, 1, 28, 76, 57, 64, 4};
  int i;

  printf("Data items in initial order:\n");
  for (i = 0; i < SIZE; i++) { printf("%3d", a[i]); }
  bubbleSort(a, SIZE);
  printf("\n\nData items in ascending order:\n");
  for (i = 0; i < SIZE; i++) { printf("%3d", a[i]); }
  printf("\n");
  return 0;
}
