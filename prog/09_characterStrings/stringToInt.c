// Convert string to integer
#include <stdio.h>


int strToInt(const char string[]) {
  int i,
    intVal,
    result = 0;

  for (i = 0; string[i] >= '0' && string[i] <= '9'; ++i) {
    intVal = string[i] - '0';
    result = result * 10 + intVal;
  }

  return result;
}


int main() {
  printf("%i\n", strToInt("245"));
  printf("%i\n", strToInt("100") + 25);
  printf("%i\n", strToInt("13x5")); // 13
  return 0;
}
