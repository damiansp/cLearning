// Count words in a piece of text
#include <stdio.h>
#include <stdbool.h>


// Determine if a character is alphabetic
bool isAlphabetic(const char c) {
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
    return true;
  }
  return false;
}


void readLine(char buffer[]) {
  char character;
  int i = 0;

  do {
    character = getchar();
    buffer[i++] = character;
  } while (character != '\n');
  buffer[i - 1] = '\0';
}


// Count words in a string
int countWords(const char string[]) {
  int wordCount = 0;
  bool isLookingForWord = true;

  for (int i = 0; string[i] != '\0'; ++i) {
    if (isAlphabetic(string[i])) {
      if (isLookingForWord) {
        ++wordCount;
        isLookingForWord = false;
      }
    } else { isLookingForWord = true; }
  }
  return wordCount;
}


int main() {
  char text[81];
  int totalWords = 0;
  bool isEnd = false;

  printf("Type in your text. Then press return.\n\n");
  while (!isEnd) {
    readLine(text);
    if (text[0] == '\0') { isEnd = true; }
    else { totalWords += countWords(text); }
  }
  printf("\nThere are %d words in your text.\n", totalWords);
  return 0;
}
