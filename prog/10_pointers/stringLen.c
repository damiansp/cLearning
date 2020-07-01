// Get length of a string
#include <stdio.h>


int getStringLen(const char *string) {
  const char *cptr = string;

  while (*cptr) ++cptr;
  return cptr - string;
}


int main() {
  printf("%d  ", getStringLen("get string length test"));
  printf("%d  ", getStringLen(""));
  printf("%d\n", getStringLen("done"));
  return 0;
}
