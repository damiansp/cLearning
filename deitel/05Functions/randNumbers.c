#include <stdio.h>
#include <stdlib.h>


int main() {
  for (int i = 1; i <= 20; i++) {
    printf("%10d", 1 + (rand() % 6)); // on [1, 6]
    if (i % 5 == 0) {
      printf("\n");
    }
  }
  return 0;
}
