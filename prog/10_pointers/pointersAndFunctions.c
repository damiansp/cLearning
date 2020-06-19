// pointers and functions demo
#include <stdio.h>


void test(int *intPointer) { *intPointer = 100; }


int main() {
  int i = 50,
    *p = &i;

  printf("Before call to test(), i = %d\n", i);
  test(p);
  printf("After, i = %d\n", i);
  return 0;
}
