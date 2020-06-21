// Delete characters in string
#include <stdio.h>


void removeString(char s[], int start, int len) {
  int i = 0,
    j = 0;
  while (s[i] != '\0') {
    if (i < start || i >= start + len) {
      s[j++] = s[i++];
    } else { i++; }
  }
  s[j] = '\0';
}

int main() {
  char s[] = "the wrong son";
  int i = 0;

  printf("Initial string: \"%s\"\nDeleting chars 4-6...\n", s);
  removeString(s, 4, 6);
  printf("Edited string: \"%s\"\n", s);
  return 0;
}
