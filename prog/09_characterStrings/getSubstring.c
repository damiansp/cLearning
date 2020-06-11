// Get a substring
#include <stdio.h>


void getSubstring(const char s[], int start, int len, char sub[]) {
  int j = 0;
  
  for (int i = start; i <= start + len; ++i) {
    sub[j++] = s[i];
  }
}


int main() {
  int len = 6;
  char string[] = "substring";
  char sub[len];

  getSubstring(string, 3, len, sub);
  printf("Substring is: '");
  for (int i = 0; i < len; ++i) {
    printf("%c", sub[i]);
  }
  printf("'\n");
}
