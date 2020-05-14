#include <stdio.h>


struct time {
  int hour;
  int minutes;
  int seconds;
};


struct time updateTime(struct time now) {
  ++now.seconds;
  if (now.seconds == 60) {
    now.seconds = 0;
    ++now.minutes;
    if (now.minutes == 60) {
      now.minutes = 0;
      ++now.hour;
      if (now.hour == 24) {
        now.hour = 0;
      }
    }
  }
  return now;
}


int main() {
  struct time currentTime,
    nextTime;

  printf("Enter the time (hh:mm:ss): ");
  scanf("%02d:%02d:%02d",
        &currentTime.hour, &currentTime.minutes, &currentTime.seconds);
  nextTime = updateTime(currentTime);
  printf("Time updated to %02d:%02d:%02d\n",
         nextTime.hour, nextTime.minutes, nextTime.seconds);
  return 0;
}
