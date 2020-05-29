#include <stdio.h>
#include <stdbool.h>


struct entry {
  char word[15];
  char definition[50];
};


bool stringsAreEqual(const char s1[], const char s2[]) {
  int i = 0;

  while (s1[i] == s2[i] && s1[i] != '\0' && s2 != '\0') { ++i; }
  if (s1[i] == '\0' && s2[i] == '\0') { return true; }
  return false;
}


int lookup(
    const struct entry dictionary[], const char search[], const int entries) {
  for (int i = 0; i < entries; ++i) {
    if (stringsAreEqual(search, dictionary[i].word)) { return i; }
  }
  return -1;
}


int main() {
  const struct entry  dictionary[100] = {
    {"aardvark", "a burrowing African mammal"},
    {"abyss", "a bottomless pit"},
    {"acumen", "mentally sharp; keen"},
    {"addle", "to become confused"},
    {"aerie", "a high nest"},
    {"affix", "to append; attach"},
    {"agar", "a jelly made from seaweed"},
    {"ahoy", "a nautical call of greeting"},
    {"aigrette", "an ornamental cluster of feathers"},
    {"ajar", "partially opened"}};
  char word[10];
  int entries = 10;
  int entry;

  printf("Enter word: ");
  scanf("%14s", word);
  entry = lookup(dictionary, word, entries);
  if (entry != -1) { printf("%s\n", dictionary[entry].definition); }
  else { printf("Sorry, '%s' not found\n", word); }
  return 0;
}
