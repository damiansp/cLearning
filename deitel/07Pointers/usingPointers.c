#include <stdio.h>


int main() {
  int a = 7;
  int* aPtr = &a;

  printf("The address of 'a' is %p\nThe value of 'aPtr' is %p", &a, aPtr);
  printf("\n\nThe value of 'a' is %d\nThe value of '*aPtr' is %d", a, *aPtr);
  printf("\n\nShowing that * and & are complements\n&*aPtr = %p\n*&aPtr = %p\n",
         &*aPtr,
         *&aPtr);
  return 0;
}
