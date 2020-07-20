#include <stdio.h>


int main() {
  unsigned int w1 = 077u, 
    w2 = 0150u,
    w3 = 0210u;

  printf("%o  ", w1 & w2);      // 50
  printf("%o  ", w1 & w1);      // 77
  printf("%o  ", w1 & w2 & w3); // 10
  printf("%o\n", w1 & 1);       // 1
  return 0;
}
