#include <stdio.h>

void copyString(char *to, char *from) {
  for (; *from != '\0'; ++from, ++to) *to = *from;
  *to = '\0';
}


int main() {
  char s1[] = "Copy Me!";
  char s2[50];

  copyString(s2, s1);
  printf("%s\n", s2);
  copyString(s2, " Me too!");
  printf("%s\n", s2);
  return 0;
}
