#include <stdio.h>
#define SIZE 5

/* 'b' points to original array 'a' */
void modifyArray(int b[], int size) {
  for (int j = 0; j < size; j++) { b[j] *= 2; }
}


/* 'e' is a local copy of array element passed in from main */
void modifyElement(int e) { printf("Value in modifyElement is %d\n", e *= 2); }


int main() {
  int a[SIZE] = {0, 1, 2, 3, 4};
  int i;

  printf("Effects of passing entire array by reference:\n\n"
         "The values of the original array are:\n");
  for (i = 0; i < SIZE; i++) { printf("%3d", a[i]); }
  printf("\n");
  modifyArray(a, SIZE);
  printf("The values of the modified array are:\n");
  for (i = 0; i < SIZE; i++) { printf("%3d", a[i]); }
  printf("\n\n\nEffects of passin array element by value:\n\n"
         "The value of a[3] is %d\n",
         a[3]);
  modifyElement(a[3]);
  printf("The value of a[3] is %d\n", a[3]);
  return 0;
}
