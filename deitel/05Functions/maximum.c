#include <stdio.h>


int maximum(int x, int y, int z) {
  int max = x;
  if (y > max) max = y;
  if (z > max) max = z;
  return max;
}


int main() {
  int n1;
  int n2;
  int n3;
  printf("Enter 3 integers: ");
  scanf("%d%d%d", &n1, &n2, &n3);
  printf("Max is %d\n", maximum(n1, n2, n3));
  return 0;
}
