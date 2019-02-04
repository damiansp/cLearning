#include <stdio.h>


int main(void) {
  int i1;
  int i2;
  int sum;
  
  printf("Enter first integer:\n> ");
  scanf("%d", &i1);
  printf("Enter second integer:\n> ");
  scanf("%d", &i2);
  sum = i1 + i2;
  printf("Sum is %d\n", sum);
  return 0;
}
