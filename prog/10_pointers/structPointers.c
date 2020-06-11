#include <stdio.h>


int main() {
  struct date {
    int month;
    int day;
    int year;
  };

  struct date today, *datePtr;

  datePtr = &today;
  datePtr->month = 6; // equivalent to (*datePtr).month = 6
  datePtr->day = 11;
  datePtr->year = 2020;
  printf("Today's date is %d-%02d-%02d\n",
         datePtr->year, datePtr->month, datePtr->day);
  return 0;
}
