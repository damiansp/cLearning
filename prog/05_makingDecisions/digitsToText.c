#include <stdio.h>

void printDigit(int n) {
  switch (n) {
  case 0:
    printf("zero"); break;
  case 1:
    printf("one"); break;
  case 2:
    printf("two"); break;
  case 3:
    printf("three"); break;
  case 4:
    printf("four"); break;
  case 5:
    printf("five"); break;
  case 6:
    printf("six"); break;
  case 7:
    printf("seven"); break;
  case 8:
    printf("eight"); break;
  case 9:
    printf("nine"); break;
  default:
    printf("not a digit"); break;
  }
}


int parseFirstDigit(int n) {
  int place = 1,
    nextDigit = n;
  
  while (nextDigit > 9) {
    nextDigit /= 10;
    place *= 10;
  }
  printDigit(nextDigit);
  printf(" ");
  n -= (nextDigit * place);
  return n;
}


int main() {
  int n;    

  printf("Enter a positive integer value: ");
  scanf("%d", &n);
  if (n == 0) { printDigit(n); }
  while (n > 0) {
    n = parseFirstDigit(n);
    if (n == 0) { printDigit(n); }
  }
  printf("\n");
  return 0;
}
