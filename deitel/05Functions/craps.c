#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {CONTINUE, WON, LOST};


int rollDice() {
  int die1;
  int die2;
  int sumOfDice;

  die1 = 1 + (rand() % 6);
  die2 = 1 + (rand() % 6);
  sumOfDice = die1 + die2;
  printf("Rolled %d + %d = %d\n", die1, die2, sumOfDice);
  return sumOfDice;
}


int main() {
  int roll;
  int point;
  enum Status gameStatus; // CONTINUE, WON, or LOST

  srand(time(NULL));
  roll = rollDice();
  switch(roll) {
  case 7:
  case 11:
    gameStatus = WON;
    break;
  case 2:
  case 3:
  case 12:
    gameStatus = LOST;
    break;
  default:
    gameStatus = CONTINUE;
    point = roll;
    printf("Point is %d\n", point);
    break;
  }
  while (gameStatus == CONTINUE) {
    roll = rollDice();
    if (roll == point) gameStatus = WON;
    else if (roll == 7) gameStatus = LOST;
  }
  if (gameStatus == WON) printf("You win!\n");
  else printf("You lose!\n");
  return 0;
}
