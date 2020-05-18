#include <stdio.h>


int len(const char s[]) {
  int count = 0;

  while (s[++count] != '\0') { ; }
  return count;
}


int main() {
  const char w1[] = {'a', 's', 't', 'r', 'a', '\0'};
  const char w2[] = {'p', 'e', 'r', '\0'};
  const char w3[] = {'a', 's', 'p', 'e', 'r', 'a', '\0'};
  printf("%d\t%d\t%d\n", len(w1), len(w2), len(w3));
  return 0;
}
