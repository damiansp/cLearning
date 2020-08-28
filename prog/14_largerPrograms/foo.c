#include <stdio.h>

extern int i;
static int j = 0; /* global to file, but inaccessible elsewhere */


void foo() { i = 100; }

void foo2() {
  extern int i;
  i = 200;
  printf("j is %i\n", j);
}
