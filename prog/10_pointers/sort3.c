#include <stdio.h>

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

void sort(int a, int b, int c) {
  int *min = &a,
    *mid = &b,
    *max = &c;
  int temp;

  if (*mid < *min) swap(mid, min);
  if (*max < *min) swap(max, min);
  if (*max < *mid) swap(max, mid);
  printf("%d <= %d <= %d\n", *min, *mid, *max);
};


int main() {
  int a = 23,
    b = 47,
    c = 1;
  sort(a, b, c);
  return 0;
}
