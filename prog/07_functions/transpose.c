#include <stdio.h>


void transpose(int rows, int cols, int m[rows][cols], int mPrime[cols][rows]) {
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      mPrime[j][i] = m[i][j];
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
  const int NROW = 4;
  const int NCOL = 5;
  int m[NROW][NCOL] = {{ 0,  1,  2,  3,  4},
                       { 5,  6,  7,  8,  9},
                       {10, 11, 12, 13, 14},
                       {15, 16, 17, 18, 19}};
  int mT[NCOL][NROW];
  transpose(NROW, NCOL, m, mT);
  printf("M:\n");
  printMatrix(NROW, NCOL, m);
  printf("\nM':\n");
  printMatrix(NCOL, NROW, mT);
  return 0;
}
