#include <stdio.h>


int main() {
  int n[] = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23};

  printf("%s%13s\n", "Element", "Value");
  for (int i = 0; i < 10; i++) {
    printf("%7d%13d\n", i, n[i]);
  }
  return 0;
}
