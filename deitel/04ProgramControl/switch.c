#include <stdio.h>


int main() {
  int grade;
  int as = 0;
  int bs = 0;
  int cs = 0;
  int ds = 0;
  int fs = 0;

  printf("Enter the letter grades; EOF to end input\n");
  while ((grade = getchar()) != EOF) {
    switch(grade) {
    case 'A':
    case 'a':
      ++as; break;
    case 'B':
    case 'b':
      ++bs; break;
    case 'C':
    case 'c':
      ++cs; break;
    case 'D':
    case 'd':
      ++ds; break;
    case 'F':
    case 'f':
      ++fs; break;
    case '\n':
    case '\t':
    case ' ':
      break;
    default:
      printf("Bad input.\nEnter next grade\n"); break;
    }
  }
  printf("\nTotals for each letter grade:\n");
  printf(" A: %d\n", as);
  printf(" B: %d\n", bs);
  printf(" C: %d\n", cs);
  printf(" D: %d\n", ds);
  printf(" F: %d\n", fs);
  return 0;
}
