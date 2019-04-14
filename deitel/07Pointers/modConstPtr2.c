#include <stdio.h>


int main() {
  int x = 5;
  int y;

  /* ptr is const pointer to const int.  ptr always points to same location; 
     the int at that location cannot be modified */
  const int* const ptr = &x;

  printf("%d\n", *ptr);
  *ptr = 7; // error
  ptr = &y; // error
  return 0;
}
