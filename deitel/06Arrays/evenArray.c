#include <stdio.h>

#define SIZE 10


int main() {
  int s[SIZE];

  for (int j = 0; j < SIZE; j++) { s[j] = 2*j + 2; }
  printf("%s%13s\n", "Element", "Value");
  for (int j = 0; j < SIZE; j++) { printf("%d%13d\n", j, s[j]); }
  return 0;
}
