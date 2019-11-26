#include <stdio.h>

enum threatLevel {
  LOW,
  MODERATE,
  HIGH,
  SEVERE
};


void printThreat(enum threatLevel threat) {
  switch(threat) {
  case LOW:
    printf("Green....Low\n"); break;
  case MODERATE:
    printf("Yellow...Moderate\n"); break;
  case HIGH:
    printf("Orange...High\n"); break;
  case SEVERE:
    printf("Red......Severe\n"); break;
  }
}


void printShoes(enum threatLevel threat) {
  if (threat >= HIGH) { printf("Put your shoes on and prepare to flee.\n"); }
  else { printf("Please keep your shoes off at this time.\n"); }
}


int main() {
  enum threatLevel currentThreat = HIGH;
  printf("Current threat level is:\n");
  printThreat(currentThreat);
  printShoes(currentThreat);
  return 0;
}
