#include <stdio.h>


int main() {
  int passes = 0,
    failures = 0,
    student = 1,
    result;
  while (student <= 10) {
    printf("Enter result (1: pass; 2: fail) > ");
    scanf("%d", &result);
    if (result == 1) passes++;
    else failures++;
    student++;
  }
  printf("Passed: %d\n", passes);
  printf("Failed: %d\n", failures);
  if (passes > 8) printf("Good teaching!\n");
  return 0;
}
