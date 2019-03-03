#include <stdio.h>

int square(int y); /* function prototype */


int main() {
  for (int i = 1; i <= 10; i++) printf("%d ", square(i));
  printf("\n");
  return 0;
}


int square(int x) { return x * x; }
