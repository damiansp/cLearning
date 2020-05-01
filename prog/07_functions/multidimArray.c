#include <stdio.h>


void displayMatrix(int matrix[3][5]) {
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 5; ++j) {
      printf("%5i", matrix[i][j]);
    }
    printf("\n");
  }
}


void scalarMultiply(int matrix[3][5], int scalar) {
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 5; ++j) {
      matrix[i][j]  *= scalar;
    }
  }
}


int main() {
  int matrix[3][5] = {{1, 2, 3,  4,  5},
                      {2, 4, 6,  8, 10},
                      {3, 6, 9, 12, 15}};

  printf("Matrix M:\n");
  displayMatrix(matrix);
  scalarMultiply(matrix, 2);
  printf("\n2M:\n");
  displayMatrix(matrix);
  scalarMultiply(matrix, -3);
  printf("\n-6M:\n");
  displayMatrix(matrix);
  return 0;
}
