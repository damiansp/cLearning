#include <stdio.h>

int main(int argc, char* argv[]) {
  int distance = 100;
  float power = 2.345f;
  double super_power = 98765.4321;
  char initial = 'J';
  char first_name[] = "John";
  char last_name[] = "Jingleheimer-Schmidt";
  printf("You are %d miles away.\n", distance);
  printf("You have %f levels of power.\n", power);
  printf("You have %f awesome super powers.\n", super_power);
  printf("Your full name is %s %c. %s.\n", first_name, initial, last_name);
  printf("That's my name, too.\n");

  int bugs = 100;
  double bug_rate = 1.2;
  printf("You have %d bugs; %f bugs per minute.\n", bugs, bug_rate);

  long universe_of_defects = 1L * 1024L * 1024L * 1024L;
  printf("The entire univers has %ld bugs.\n", universe_of_defects);

  double expected_bugs = bugs * bug_rate;
  printf("You should expect %f bugs.\n", expected_bugs);

  double part_of_universe = expected_bugs / universe_of_defects;
  printf("That is only a %e portion of the universe.\n", part_of_universe);

  // Something weird:
  char null_byte = '\0';
  int care_percentage = bugs * null_byte;
  printf("So you should care, roughly %d%%.\n", care_percentage);

  return 0;
}
