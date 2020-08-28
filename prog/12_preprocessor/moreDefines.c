#include <stdio.h>

#define PI 3.141592654


double area(double r) { return PI * r * r; }

double circumference(double r) { return 2.0 * PI * r; }

double volume(double r) { return 4.0 / 3.0 * PI * r * r * r; }


int main() {
  printf("radius = 1:    %7.4f %7.4f %7.4f\n",
         area(1.0), circumference(1.0), volume(1.0));
  printf("radius = 2.22: %7.4f %7.4f %7.4f\n",
         area(2.22), circumference(2.22), volume(2.22));
  return 0;
}
