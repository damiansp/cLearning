// Determine if 2 strings are equal
#include <stdio.h>
#include <stdbool.h>


bool stringsAreEqual(const char s1[], const char s2[]) {
  int i = 0;

  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') { ++i; }
  if (s1[i] == '\0' && s2[i] == '\0') {
    return true;
  }
  return false;
}


int main() {
  const char s1[] = "yes";
  const char s2[] = "yep";

  printf("%i\n", stringsAreEqual(s1, s2));
  printf("%i\n", stringsAreEqual(s1, s1));
  printf("%i\n", stringsAreEqual(s2, "yep"));
  return 0;
}
