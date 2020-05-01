#include <stdio.h>

int convertedNumber[64];
long int numberToConvert;
int base;
int digit = 0;


void getNumberAndBase() {
  printf("Number to convert:\n > ");
  scanf("%li", &numberToConvert);
  printf("Base:\n > ");
  scanf("%i", &base);
  if (base < 2 || base > 16) {
    printf("Base must be on [2, 16]\n");
    base = 10;
  }
}


void convertNumber() {
  do {
    convertedNumber[digit++] = numberToConvert % base;
    numberToConvert /= base;
  } while (numberToConvert != 0);
}


void displayConvertedNumber() {
  const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
                               '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
  int nextDigit;

  printf("Converted number: ");
  for (--digit; digit >= 0; --digit) {
    nextDigit = convertedNumber[digit];
    printf("%c", baseDigits[nextDigit]);
  }
  printf("\n");
}


int main() {
  getNumberAndBase();
  convertNumber();
  displayConvertedNumber();
  return 0;
}
