#include <stdio.h>


unsigned int shift(unsigned int value, int n) {
  if (n > 0) value <<= n;
  else value >>= -n;
  return value;
}


int main() {
  unsigned int w1 = 0177777u, // 000 001 111 111 111 111 111
    w2 = 0444u;               // 000 100 100 100

  printf("%o\t%o\n", shift(w1, 5), w1 << 5); // 111 111 111 111 111 100 000
                                             // = 7777740
  printf("%o\t%o\n", shift(w1, -6), w1 >> 6); // 000 000 000 001 111 111 111
                                              // =           1777
  printf("%o\t%o\n", shift(w2, 0), w2 >> 0);  // 000 100 100 100 = 444
  printf("%o\n", shift(shift(w1, -3), 3));    // 000 001 111 111 111 111 000
                                              //       177770
  return 0;
}
