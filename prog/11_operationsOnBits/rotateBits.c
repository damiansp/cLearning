#include <stdio.h>


unsigned int rotate(unsigned int val, int n) {
  unsigned int res,
    bits;

  // force n to defined range
  if (n > 0) n %= 32;
  else n = -(-n % 32);
  if (n == 0) {
    return val;
  }
  if (n > 0) { // rotate left
    bits = val >> (32 - n);
    res = val << n | bits;
  } else {     // rotate right
    n = -n;
    bits = val << (32 - n);
    res = val >> n | bits;
  }
  return res;
}


int main() {
  unsigned int w1 = 0xabcdef00u,
    w2 = 0xffff1122u;

  printf("%x\n", rotate(w1, 8));   // cdef00ab
  printf("%x\n", rotate(w1, -16)); // ef00abcd
  printf("%x\n", rotate(w2, 4));   // fff1122f
  printf("%x\n", rotate(w2, -2));  // bfffc448
  printf("%x\n", rotate(w1, 0));   // abcdef00
  printf("%x\n", rotate(w1, 44));  // def00abc
  return 0;
}
