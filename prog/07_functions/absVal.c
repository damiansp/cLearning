#include <stdio.h>


float absoluteValue(float x) {
  if (x < 0) { x = -x; }
  return x;
}


int main() {
  float f1 = -15.5,
    f2 = 20.0,
    f3 = -5.0;
  int i1 = -717;
  float result;

  result = absoluteValue(f1);
  printf("|%.1f| = %.1f\n", f1, result);

  result = absoluteValue(f2) + absoluteValue(f3);
  printf("|%.1f| + |%.1f| = %.1f\n", f2, f3, result);

  result = absoluteValue((float) i1);
  printf("|%d| = %.1f\n", i1, result);

  result = absoluteValue(i1);
  printf("|%d| = %.1f\n", i1, result);

  printf("|-6.0| / 4 = %.2f\n", absoluteValue(-6.0) / 4);
  return 0;    
}
