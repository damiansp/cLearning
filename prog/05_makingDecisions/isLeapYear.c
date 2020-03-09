#include <stdio.h>


int main() {
  int year;

  printf("Year to test: ");
  scanf("%i", &year);
  int rem4 = year % 4;
  int rem100 = year % 100;
  int rem400 = year % 400;
  
  if ((rem4 == 0 && rem100 != 0) || rem400 == 0) {
    printf("Yes: leap year\n");
  } else {
    printf("No: not a leap year\n");
  }

  return 0;
}
