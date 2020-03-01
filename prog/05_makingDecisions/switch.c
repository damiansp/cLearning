#include <stdio.h>


int main() {
  float n1, n2;
  char operator;

  printf("Type in your expression.\n> ");
  scanf("%f %c %f", &n1, &operator, &n2);
  switch (operator) {
  case '+':
    printf("%.2f", n1 + n2); break;
  case '-':
    printf("%.2f", n1 - n2); break;
  case '*':
  case 'x':
    printf("%.2f", n1 * n2); break;
  case '/':
    if (n2 == 0) { printf("undefined"); }
    else { printf("%.2f", n1 / n2); }
    break;
  default:
    printf("Bad operator.  Not smooth at all.\n"); break;
  }
  printf("\n");

  return 0;
}
