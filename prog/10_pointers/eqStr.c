// Determine if 2 strings are equal
#include <stdio.h>
#include <stdbool.h>


bool stringsAreEqual(const char *s1, const char *s2) {
  while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0') {
    s1++;
    s2++;
  }
  if (*s1 == '\0' && *s2 == '\0') return true;
  return false;
}


int main() {
  const char s1[] = "yes";
  const char s2[] = "yep";

  printf("%i\n", stringsAreEqual(s1, s2));
  printf("%i\n", stringsAreEqual(s1, s1));
  return 0;
}
