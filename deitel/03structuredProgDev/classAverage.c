/* Use counter-controlled repetition to compute a class average */
#include <stdio.h>


int main(void) {
  int counter = 1,
    grade,
    total = 0,
    mean;
  while (counter <= 10) {
    printf("Enter grade: ");
    scanf("%d", &grade);
    total += grade;
    counter++;
  }
  mean = total / 10;
  printf("Class mean is: %d\n", mean);
  return 0;
}
