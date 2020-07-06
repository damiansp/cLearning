#include <stdio.h>


void sort(int *a) {
  for (int *i = a; *(i + 1)!= '\0' ; i++) {
    for (int *j = i + 1; *j != '\0'; j++) {
      if (*i > *j) {
        int temp = *i;
        *i = *j;
        *j = temp;
      }
    }
  }
}


int main() {
  int i;
  int arr[15] = {1, 2, 34, 5678, -9012345, 67890, -9, -87654321,  -1, 2,
                 45, 67890, -2, 56, -78901};
  
  printf("Array:\n");
  for (i = 0; i < 15; ++i) { printf("%i ", arr[i]); }
  sort(arr);
  printf("\nSorted:\n");
  for (i = 0; i < 15; ++i) { printf("%i ", arr[i]); }
  printf("\n");
  return 0;
}
