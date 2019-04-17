#include <stdio.h>

void copy1(char* const str1, const char* const str2) {
  for (int i = 0; (str1[i] = str2[i]) != '\0'; i++) { ; /* do nothing */ }
}


void copy2(char* str1, const char* str2) {
  for (; (*str1 = *str2) != '\0'; str1++, str2++) { ; /* niente */ }
}


int main() {
  char s1[10];
  char* s2 = "Hello";
  char s3[10];
  char s4[] = "Good bye";

  copy1(s1, s2);
  printf("s1 = %s\n", s1);
  copy2(s3, s4);
  printf("s3 = %s\n", s3);
  return 0;
}
