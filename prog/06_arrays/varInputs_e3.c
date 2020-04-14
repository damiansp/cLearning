#include <stdio.h>


int main() {
  int MAX_RATING = 10;
  int ratings[MAX_RATING + 1],
    i,
    response;

  for (i = 1;  i <= 10;  ++i ) { ratings[i] = 0; }
  printf("Enter your responses (-1 to terminate): ");
  do {
    scanf("%i", &response);
    if (response < 0 || response > 10) {
      printf("Bad response: %i\n", response);
    } else { ++ratings[response]; }
  } while (response != -1);
  printf ("\n\nRating   Number of Responses\n");
  printf ("------ -------------------\n");
  for ( i = 1;  i <= 10;  ++i ) {
    printf ("%4i%14i\n", i, ratings[i]);
  }

  return 0;
}
