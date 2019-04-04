#include <stdio.h>


void tryToModifyArray(const int b[]) {
  b[0] /= 2; // error (this file will not compile)
  b[1] /= 2;
  b[2] /= 2;
}

int main() {
  int a[] = {10, 20, 30};

  tryToModifyArray(a);
  printf("%d %d %d\n", a[0], a[1], a[2]);
  return 0;
}
