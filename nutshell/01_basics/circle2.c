// circle.c: Calculate and print the areas of circles
// Uses circulararea.c

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
