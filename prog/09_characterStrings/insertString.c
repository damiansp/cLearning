#include <stdio.h>


int getLen(const char s[]) {
  int len = 0;
  while (s[len++] != '\0') { ; }
  return len - 1;
}


void insertString(char s[], const char insert[], int at) {
  int sLen = getLen(s);
  int inLen = getLen(insert);
  char temp[sLen];
  int i, j = 0;
    
  // Copy post-insert substring to temp
  for (i = at; i <= at + inLen; i++) {
    temp[j++] = s[i];
  }

  // Insert
  for (i = at; i <= at + inLen; i++) {
    s[i] = insert[i - at];
  }

  // Reappend temp
  for (i = at + inLen; i < sLen + inLen; i++) {
    s[i] = temp[i - at - inLen];
  }
  s[sLen + inLen] = '\0';
}


int main() {
  char s[] = "the wrong son";

  printf("Inserting 'per' into '%s' at index 10:\n", s);
  insertString(s, "per", 10);
  printf("%s\n", s);
  return 0;
}
