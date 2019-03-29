#include <stdio.h>


void staticArrayInit() {
  static int array1[3];
  int i;

  printf("\nValues on entering staticArrayInit:\n");
  for (i = 0; i <= 2; i++) { printf("array1[%d] = %d\n", i, array1[i]); }
  printf("\nValues on exiting staticArrayInit:\n");
  for (i = 0; i <= 2; i++) { printf("array1[%d] = %d\n", i, array1[i] += 5); }
}


void automaticArrayInit() {
  int array2[3] = {1, 2, 3};
  int i;

  printf("\n\nValues on entering automaticArrayInit:\n");
  for (i = 0; i <= 2; i++) { printf("array2[%d] = %d\n", i, array2[i]); }
  printf("\nValues on exiting automaticArrayInit:\n");
  for (i = 0; i <= 2; i++) { printf("array2[%d] = %d\n", i, array2[i] += 5); }
}


int main() {
  printf("First call to each function:\n");
  staticArrayInit();
  automaticArrayInit();
  printf("Second call to each:\n");
  staticArrayInit();
  automaticArrayInit();
  return 0;
}
