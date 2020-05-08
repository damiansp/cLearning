// Date to demo struct
#include <stdio.h>


int main() {
  struct date {
    int month;
    int day;
    int year;
  };

  struct date today;
  today.month = 5;
  today.day = 8;
  today.year = 2020;

  printf("Today's date is %i-%02i-%02i\n", today.year, today.month, today.day);
  return 0;
}
