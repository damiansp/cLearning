#include <stdio.h>

int main(int argc, char* argv[]) {
  int i = 0;
  while (i <= 25) {
    printf("%2d ", i);
    if (i % 5 == 0) {
      printf("\n");
    }
    i++;
  }
  return 0;
}
