#include <stdio.h>
#include "metric.h"


int main() {
  float liters, gallons;

  printf("*** Liters to Gallons ***\n\n");
  printf("Enter no. of liters: ");
  scanf("%f", &liters);

  gallons = liters * QT_PER_L / 4.0;
  printf("%g liters = %g gallons\n", liters, gallons);
  return 0;
}
