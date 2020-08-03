#include <stdio.h>

#define YES 1
#define NO  0


int isEven(int n) {
  if (n % 2 == 0) return YES;
  return NO;
}


int main() {
  if (isEven(17) == YES) printf("17 is even\n");
  else printf("17 is not even\n");
  if (isEven(20) == YES) printf("20 is even\n");
  else printf("20 is not even\n");
  return 0;
}
