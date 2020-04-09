// Convert positive ints from one base to another
#include <stdio.h>


int main() {
  const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                               'A', 'B', 'C', 'D', 'E', 'F'};
  int convertedNumber[64];
  long int numberToConvert;
  int nextDigit,
    base,
    i = 0;

  // Get no. and base
  printf("Number to convert? ");
  scanf("%ld", &numberToConvert);
  printf("Base? ");
  scanf("%i", &base);

  // Convert to indicated base
  do {
    convertedNumber[i++] = numberToConvert % base;
    numberToConvert /= base;
  } while (numberToConvert > 0);

  // Display results in reverse order
  printf("Converted Number: ");
  for (--i; i >= 0; --i) {
    nextDigit = convertedNumber[i];
    printf("%c", baseDigits[nextDigit]);
  }
  printf("\n");
  return 0;
}
