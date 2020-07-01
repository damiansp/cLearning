#include <stdio.h>


void copyString (char *to, char *from) {
  while (*from) *to++ = *from++;
  *to = '\0';
}


int main() {
  char s1[] = "Copy this sting.";
  char s2[50];

  copyString(s2, s1);
  printf("%s\n", s2);
  copyString(s2, "Copy me too!");
  printf("%s\n", s2);
  return 0;
}
