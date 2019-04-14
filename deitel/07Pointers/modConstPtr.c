#include <stdio.h>


int main() {
  int x;
  int y;

  /* ptr is a const pointer to an int that can be modified through ptr, but
     ptr always point to same location in memory */
  int* const ptr = &x;

  *ptr = 7;
  ptr = &y; // error: can not assign to new address
  return 0;
}
