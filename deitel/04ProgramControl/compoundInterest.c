#include <math.h>
#include <stdio.h>


int main() {
  double amount;
  double principal = 1000.0;
  double rate = 0.05;
  printf("%4s%21s\n", "Year", "Amount on Deposit");
  for (int year = 1; year <= 10; year++) {
    amount = principal * pow(1.0 + rate, year);
    printf("%4d%21.2f\n", year, amount);
  }
  return 0;
}
