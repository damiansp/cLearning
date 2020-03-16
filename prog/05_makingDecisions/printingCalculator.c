#include <stdio.h>


int main() {
  double value = 0;
  double operand;
  char operator;

  printf("Input calculations in the format:\n 'value' 'operator'");
  printf(
    "Operators available:\n S: set value\n +\n -\n *\n /\n E: end program");
  printf("\n\nBegin calculations:\n");
  scanf("%lf %c", &operand, &operator);
  while (operator != 'E') {
    switch (operator) {
    case 'S':
      value = operand;
      printf("= %.6f\n", value);
      break;
    case '+':
      value += operand;
      printf("= %.6f\n", value);
      break;
    case '-':
      value -= operand;
      printf("= %.6f\n", value);
      break;
    case '*':
      value *= operand;
      printf("= %.6f\n", value);
      break;
    case '/':
      if (operand == 0) {
        printf("Division by 0 is undefined.  Try another operation.\n");
        scanf("%lf %c", &operand, &operator);
      } else {
        value /= operand;
        printf("= %.6f\n", value);
      }
      break;
    default:
      printf("Operator %c not understood. Reenter command.\n", operator);
      scanf("%lf %c", &operand, &operator);
    }
    scanf("%lf %c", &operand, &operator);      
  }
  printf("End of calculations.\n");
}
