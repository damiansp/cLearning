#include <stdio.h>


/* func prototypes */
void useLocal();
void useStaticLocal();
void useGlobal();


int x = 1;


int main() {
  int x = 5;

  printf("local x in outer scope of main: %d\n", x);

  /* new scope */
  {
    int x = 7;
    printf("local x in inner scope of main: %d\n", x);
  }

  printf("local x in outer scope of main: %d\n", x);

  useLocal();
  useStaticLocal();
  useGlobal();
  useLocal();
  useStaticLocal();
  useGlobal();
  printf("\nloac x in main: %d\n", x);
  return 0;
}


void useLocal() {
  int x = 25;

  printf("\nlocal x in useLocal: %d", x);
  x++;
  printf("\nlocal x in useLocal: %d", x);
}


void useStaticLocal() {
  static int x = 50;

  printf("\nlocal static x: %d", x);
  x++;
  printf("\nlocal static x: %d", x);
}


void useGlobal() {
  printf("\nglobal x: %d\n", x);
  x *= 10;
  printf("global x: %d\n", x);
}
