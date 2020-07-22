#include <stdio.h>


int main() {
  unsigned int w1 = 0525u,
    w2 = 0707u,
    w3 = 0122u;

  printf("%o  %o  %o\n", w1 & w2, w1 | w2, w1 ^ w2);       // 505 727 222
  printf("%o  %o  %o\n", ~w1, ~w2, ~w3);
  // 37777777252  37777777070  37777777655
  printf("%o  %o  %o\n", w1 ^ w1, w1 & ~w2, w1 | w2 | w3); // 0 20 727
  printf("%o  %o\n", w1 | (w2 & w3), w1 | (w2 & ~w3));     // 527 725
  printf("%o  %o\n", ~(~w1 & ~w2), ~(~w1 | ~w2));          // 727 505

  w1 ^= w2;
  w2 ^= w1;
  w1 ^= w2;
  printf("w1 = %o, w2 = %o\n", w1, w2); // 707, 525
}
