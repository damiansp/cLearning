#include <stdio.h>


int main() {
  char string1[20];
  char string2[] = "string literal";

  printf("Enter a string: ");
  scanf("%s", string1);
  printf("string1 is: %s\nstring2 is: %s\n"
         "string1 with spaces between charcters is:\n",
         string1,
         string2);
  for (int i = 0; string1[i] != '\0'; i++) {
    printf("%c ", string1[i]);
  }
  printf("\n");
  return 0;
}
