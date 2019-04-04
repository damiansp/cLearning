#include <stdio.h>

void printArray(const int a[][3]);


int main() {
  int a1[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int a2[2][3] = {1, 2, 3, 4, 5};
  int a3[2][3] = {{1, 2}, {4}};

  printf("Values in a1 (by row):\n");
  printArray(a1);
  printf("a2:\n");
  printArray(a2);
  printf("a3:\n");
  printArray(a3);
  return 0;
}


void printArray(const int a[][3]) {
  for (int i = 0; i <= 1; i++) {
    for (int j = 0; j <= 2; j++) { printf("%d ", a[i][j]); }
    printf("\n");
  }
}
