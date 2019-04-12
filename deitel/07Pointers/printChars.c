#include <stdio.h>


// strPtr cannot modify the char it points to
void printCharacters(const char* strPtr) {
  for (; *strPtr != '\0'; strPtr++) {
    printf("%c ", *strPtr);
  }
}


int main() {
  char string[] = "gonna print me some characters";

  printf("The string spaced out is: %s\n ");
  printCharacters(string);
  printf("\n\n");
  return 0;
}
