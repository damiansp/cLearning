#include <stdio.h>
#include <ctype.h>


void convertToUppercase(char* strPtr) {
  while (*strPtr != '\0') {
    if (islower(*strPtr)) { *strPtr = toupper(*strPtr); }
    ++strPtr;
  }
}


int main() {
  char string[] = "characters and $32.95";

  printf("The initial string is:\n %s", string);
  convertToUppercase(string);
  printf("\n\nAfter conversion:\n %s\n\n", string);
  return 0;
}
