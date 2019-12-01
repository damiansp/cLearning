#include <stdio.h>


void printNStars(int n) {
  for (int i = 1; i <= n; i++) { printf("*"); }
}


void printTriangle(int dim) {
  for (int d=dim; d >= 1; d--) {
    printNStars(d);
    printf("\n");
  }
}


int main() {
  printTriangle(7);
  printf("\n\n");
  printTriangle(5);
  return 0;
}
