#include <stdio.h>


struct entry {
  char word[15];
  char def[50];
};


// Compare two strings
int compareStrings(const char s1[], const char s2[]) {
  int i = 0,
    answer;

  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
    ++i;
  }
  if (s1[i] < s2[i]) { answer = -1; }      // s1 < s2
  else if (s1[i] == s2[i]) { answer = 0; } // s1 == s2
  else { answer = 1; }                     // s1 > s2
  return answer;
}


// lookup word in dict
int lookup(const struct entry dict[], const char search[], const int entries) {
  int low = 0,
    high = entries - 1,
    mid,
    result;

  while (low <= high) {
    mid = (low + high) / 2;
    result = compareStrings(dict[mid].word, search);
    if (result == -1) { low = mid + 1; }
    else if (result == 1) { high = mid - 1; }
    else { return mid; } // found
  }
  return -1;             // not found
}


int main() {
  const struct entry  dict[100] = {
    {"aardvark", "a burrowing African mammal"},
    {"abyss", "a bottomless pit"},
    {"acumen", "mentally sharp; keen"},
    {"addle", "to become confused"},
    {"aerie", "a high nest"},
    {"affix", "to append; attach"},
    {"agar", "a jelly made from seaweed"},
    {"ahoy", "a nautical call of greeting"},
    {"aigrette", "an ornamental cluster of feathers" },
    {"ajar", "partially opened"}};
  int entries = 10;
  char word[15];
  int entry;

  printf("Enter word: ");
  scanf("%14s", word);
  entry = lookup(dict, word, entries);
  if (entry == -1) { printf("Sorry, '%s' not in the dictionary\n", word); }
  else { printf("%s: %s\n", word, dict[entry].def); }
  return 0;
}
