#include <stdio.h>
#include <stdbool.h>


struct date {
  int month;
  int day;
  int year;
};


bool isLeapYear(struct date d) {
  if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0) {
    return true;
  }
  return false;
}


int getNDays(struct date d) {
  int days;
  const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (isLeapYear(d) && d.month == 2) { days = 29; }
  else { days = daysPerMonth[d.month - 1]; }
  return days;
}


int main() {
  struct date today,
    tomorrow;

  printf("Enter today's date: (MM DD YYYY)\n> ");
  scanf("%i%i%i", &today.month, &today.day, &today.year);
  if (today.day != getNDays(today)) {
    tomorrow.day = today.day + 1;
    tomorrow.month = today.month;
    tomorrow.year = today.year;
  } else if (today.month == 12) {
    tomorrow.day = 1;
    tomorrow.month = 1;
    tomorrow.year = today.year + 1;
  } else {
    tomorrow.day = 1;
    tomorrow.month = today.month + 1;
    tomorrow.year = today.year;
  }
  printf(
    "Tomorrow is %02i/%02i/%i\n", tomorrow.month, tomorrow.day, tomorrow.year);

  return 0;
}

