#include <stdio.h>
#include <string.h>


int main() {
  char name[25];
  int n;

  printf("What's your first name? ");
  gets(name);
  n = strlen(name);
  printf("Your name as %d letters.\n", n);
  return 0;
}
