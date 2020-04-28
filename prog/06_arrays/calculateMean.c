#include <stdio.h>


double getMean(double* array, int len) {
  double total = 0;
  int i;

  for (i = 0; i < len; ++i) {
    total += array[i];
  }
  return total / len;
}

int main() {
  int n;

  printf("How many Fibonacci numbers? (Minimum of 2): ");
  scanf("%d", &n);
  double fibonaccis[n];

  fibonaccis[0] = 0;
  fibonaccis[1] = 1;
  for (int i = 2; i < n; ++i) {
    fibonaccis[i] = fibonaccis[i - 2] + fibonaccis[i - 1];
  }

  double mean = getMean(fibonaccis, n);
  printf("The mean of the first %d Fibonacci numbers is %.5f\n", n, mean);

  return 0;
}
