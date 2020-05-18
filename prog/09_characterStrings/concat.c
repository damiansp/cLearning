#include <stdio.h>


void concat(char res[], const char s1[], const char s2[]) {
  int i, j;
  for (i = 0; s1[i] != '\0'; ++i) { res[i] = s1[i]; }
  for (j = 0; s2[j] != '\0'; ++j) { res[i + j] = s2[j]; }
  res[i + j] = '\0';
}


int main() {
  const char s1[] = {"Operation "};
  const char s2[] = {"Successful!"};
  char s3[21];

  concat(s3, s1, s2);
  printf("%s\n", s3);
  return 0;
}
