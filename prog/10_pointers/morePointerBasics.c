#include <stdio.h>


int main() {
  char c = 'Q';
  char* char_pointer = &c;

  printf("%c %c\n", c, *char_pointer); // Q Q
  c = '/';
  printf("%c %c\n", c, *char_pointer); // / /
  *char_pointer = '(';
  printf("%c %c\n", c, *char_pointer); // ( (

  return 0;
}
