// Concatenate 2 char arrays
#include <stdio.h>


void concat(char res[], const char s1[], int n1, const char s2[], int n2) {
  int i;
  
  // Copy s1 to res
  for (i = 0; i < n1; ++i) { res[i] = s1[i]; }
  for (i = 0; i < n2; ++i) { res[n1 + i] = s2[i]; }
}


int main() {
  const char s1[10] = {'O', 'p', 'e', 'r', 'a', 't', 'i', 'o', 'n', ' '};
  const char s2[11] = {'S', 'u', 'c', 'c', 'e', 's', 's', 'f', 'u', 'l', '!'};
  char s3[21];

  concat(s3, s1, 10, s2, 11);
  for (int i = 0; i < 21; ++i) { printf("%c", s3[i]); }
  printf("\n");
  return 0;
}
