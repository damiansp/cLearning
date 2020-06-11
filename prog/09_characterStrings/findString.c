// Find a substring in a string *BROKEN*
#include <stdio.h>

int findString(const char s[], const char sub[]) {
  int i = 0,
    j = 0;

  while (s[i] != '\0') {
    while (s[i + j] == sub[j]) {
      if (sub[i + j] == '\0') {
        return i;
      } else {
        j++;
      }
    }
    i++;
    j = 0;
  }
  return -1;
}


int main() {
  char s[] = "a chatterbox";
  char sub1[] = "hat";
  char sub2[] = "cap";
  printf("Position of %s: %d\n", sub1, findString(s, sub1));
  printf("Position of %s: %d\n", sub2, findString(s, sub2));
  return 0;
}
