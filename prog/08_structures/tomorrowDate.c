#include <stdio.h>


int main() {
  struct date {
    int month;
    int day;
    int year;
  };
  struct date today, tomorrow;
  const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  printf("Enter today's date: (MM DD YYYY)\n> ");
  scanf("%i%i%i", &today.month, &today.day, &today.year);
  if (today.day != daysPerMonth[today.month - 1]) {
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

