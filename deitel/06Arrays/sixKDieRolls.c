#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 7
#define N_ROLLS 6000


int main() {
  int face;
  int freq[SIZE] = {0};

  srand(time(NULL)); /* seed generator */
  for (int roll = 1; roll <= N_ROLLS; roll++) {
    face = 1 + rand() % 6;
    ++freq[face];
  }
  printf("%s%17s\n", "Face", "Frequency");
  for (face = 1; face < SIZE; face++) { printf("%4d%17d\n", face, freq[face]); }
  return 0;
}
