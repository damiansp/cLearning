#include <stdio.h>

#define K_INT_SIZE 32 // machine dependent!


unsigned int rotate(unsigned int val, int n) {
  unsigned int result,
    bits;

  // Scale shift to a predefined range
  if (n > 0) n %= K_INT_SIZE;
  else n = -(-n % K_INT_SIZE);
  if (n == 0) result = val;
  else if (n > 0) { // rotate left
    bits = val >> (K_INT_SIZE - n);
    result = val << n | bits;
  } else {          // right
    n = -n;
    bits = val << (K_INT_SIZE - n);
    result = val >> n | bits;
  }

  return result;
}
