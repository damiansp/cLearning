#include <stdio.h>
#include <stdbool.h>


struct date {
  int month;
  int day;
  int year;
};


bool isLeapYear(struct date *d) {
  if ((d->year % 4 == 0 && d->year % 100 != 0) || d->year % 400 == 0) {
    return true;
  }
  return false;
}


int getNDays(struct date *d) {
  int days;
  const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (isLeapYear(d) && d->month == 2) { days = 29; }
  else { days = daysPerMonth[d->month - 1]; }
  return days;
}


void advanceDay(struct date *today) {
  if (today->day != getNDays(today)) {
    today->day++;
  } else if (today->month == 12) {
    today->month = 1;
    today->day = 1;
    today->year++;
  } else {
    today->month++;
    today->day = 1;
  }
}


int main() {
  struct date today;

  printf("Enter today's date: (MM DD YYYY)\n> ");
  scanf("%i%i%i", &today.month, &today.day, &today.year);
  advanceDay(&today);
  printf(
    "Tomorrow is %02i/%02i/%i\n", today.month, today.day, today.year);
  return 0;
}

