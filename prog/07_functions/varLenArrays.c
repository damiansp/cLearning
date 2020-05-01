#include <stdio.h>


void scalarMult(int nrow, int ncol, int mat[nrow][ncol], int scalar) {
  for (int row = 0; row < nrow; ++row) {
    for (int col = 0; col < ncol; ++col) {
      mat[row][col] *= scalar;
    }
  }
}


void printMatrix(int nrow, int ncol, int mat[nrow][ncol]) {
  for (int row = 0; row < nrow; ++row) {
    for (int col = 0; col < ncol; ++col) {
      printf("%5i", mat[row][col]);
    }
    printf("\n");
  }
}


int main() {
  int mat[3][5] = {{1, 2, 3,  4,  5},
                   {2, 4, 6,  8, 10},
                   {3, 6, 9, 12, 15}};

  printf("M:\n");
  printMatrix(3, 5, mat);
  scalarMult(3, 5, mat, 2);
  printf("2M:\n");
  printMatrix(3, 5, mat);
  scalarMult(3, 5, mat, -3);
  printf("-6M:\n");
  printMatrix(3, 5, mat);
  return 0;
}
