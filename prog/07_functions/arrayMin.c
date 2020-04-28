// Find the minimum value in an array
#include <stdio.h>


int minimum(int values[10]) {
  int minVal = values[0];

  for (int i = 1; i < 10; ++i) {
    if (values[i] < minVal) { minVal = values[i]; }
  }
  return minVal;
}


int main() {
  int scores[10],
    minScore;
  //int minimum(int values[10]);

  printf("Enter 10 scores\n");
  for (int i = 0; i < 10; ++i) { scanf("%i", &scores[i]); }
  minScore = minimum(scores);
  printf("\nMinimum score is: %i\n", minScore);
  return 0;
}
