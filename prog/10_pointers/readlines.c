#include <stdio.h>

// read a line of text from the command line
void readLine(char *stream) {
  char character;

  do {
    character = getchar();
    *stream = character;
    stream++;
  } while (character != '\n');
  *stream = '\0';
}


int main() {
  char *line;

  for (int i = 0; i < 3; ++i) {
    readLine(line);
    printf("%s\n\n", line);
  }
  return 0;
}
