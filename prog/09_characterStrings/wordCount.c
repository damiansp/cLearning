// Count words
#include <stdio.h>
#include <stdbool.h>


// Determine if a character is alphabetic
bool isAlphabetic(const char c) {
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
    return true;
  }
  return false;
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
  const char text1[] = "Well, here goes.";
  const char text2[] = "And here we go... again.";
  const char text3[] = "And...one last time";

  printf("%s - words: %i\n", text1, countWords(text1));
  printf("%s - words: %i\n", text2, countWords(text2));
  printf("%s - words: %i\n", text3, countWords(text3));
  return 0;
}
