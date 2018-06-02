// circle.c: Calculate and print the areas of circles
#include <stdio.h>

double circularArea(double r);

int main() {
  double radius = 1.0,
    area = 0.0;

  printf("    Area of Circles\n\n"
         "     Radius         Area\n"
         "------------------------\n");
  area = circularArea(radius);
  printf("%10.1f    %10.2f\n", radius, area);
  radius = 5.0;
  area = circularArea(radius);
  printf("%10.1f    %10.2f\n", radius, area);
  return 0;
}

// Calculate the area of a circle
// Param: r: the circle's radius
// Return: the circle's area
double circularArea(double r) {
  const double PI = 3.1415926536;
  return PI * r * r;
}
