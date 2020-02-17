#include <stdio.h>


int main() {
  int nGrades, grade;
  int total = 0;
  int nFail = 0;
  double mean;

  printf("How many grades? ");
  scanf("%i", &nGrades);
  for (int i = 1; i <= nGrades; ++i) {
    printf("Enter grade #%i: ", i);
    scanf("%i", &grade);
    total += grade;
    if (grade < 65) { ++nFail; }
  }
  mean = (double) total / nGrades;
  printf("\nMean grade: %.2f\n", mean);
  printf("No. failures: %i\n", nFail);

  return 0;
}
