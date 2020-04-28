#include <stdio.h>

// Absolute Value
float absVal(float x) {
  if (x < 0) { x = -x; }
  return x;
}


// Square root using Newton-Raphson method
float sqroot(float x) {
  const float EPSILON = 0.00001;
  float est = 1.0;

  while (absVal(est * est - x) >= EPSILON) { est = (x/est + est) / 2.0; }
  return est;
}


int main() {
  printf("sqroot(2.0) = %.6f\n", sqroot(2.0));
  printf("sqroot(144.0) = %.6f\n", sqroot(144.0));
  printf("sqroot(3.14159.0) = %.6f\n", sqroot(3.14159));
}
