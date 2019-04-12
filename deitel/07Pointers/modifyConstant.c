// Intentionally incorrect file; will not compile
#include <stdio.h>

void f(const int* xPtr) { *xPtr = 100; } /* error: cannot modify const val */


int main() {
  int y;
  f(&y); /* fails */
  return 0;
}
