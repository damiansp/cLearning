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


struct date getNextDay(struct date today) {
  struct date tomorrow;

  if (today.day != getNDays(today)) {
    tomorrow = (struct date) {today.month, today.day + 1, today.year};
  } else if (today.month == 12) {
    tomorrow = (struct date) {1, 1, today.year + 1};
  } else {
    tomorrow = (struct date) {today.month + 1, 1, today.year};
  }
  return tomorrow;
}


int main() {
  struct date today,
    tomorrow;

  printf("Enter today's date: (MM DD YYYY)\n> ");
  scanf("%i%i%i", &today.month, &today.day, &today.year);
  tomorrow = getNextDay(today);
  printf(
    "Tomorrow is %02i/%02i/%i\n", tomorrow.month, tomorrow.day, tomorrow.year);

  return 0;
}

