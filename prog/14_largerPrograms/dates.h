#include <stdbool.h>


enum kMonth {January=1, February, March, April, May, June, July, August,
             September, October, November, December};
enum kDay {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

struct date {
  enum kMonth month;
  enum kDay day;
  int year;
};

typedef struct date Date;

Date dateUpdate(Date today);
int nDays(Date d);
bool isLeapYear(Date d);

#define setDate(s, mm, dd, yy) s = (Date) {mm, dd, yy}

extern Date todaysDate;
