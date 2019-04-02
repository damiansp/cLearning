#include <stdio.h>
#define SIZE 99


void mean(const int answer[]) {
  int total = 0;

  printf("********\n  Mean\n********\n");
  for (int i = 0; i < SIZE; i++) { total += answer[i]; }
  printf("Mean: %d / %d = %.4f\n\n", total, SIZE, (double) total / SIZE);
}


void printArray(const int a[]) {
  for (int i = 0; i < SIZE; i++) {
    if (i % 20 == 0) { printf("\n"); }
    printf("%2d", a[i]);
  }
}


void bubbleSort(int a[]) {
  int pass;
  int i;
  int hold;
  for (pass = 1; pass < SIZE; pass++) {
    for (i = 0; i < SIZE - 1; i++) {
      if (a[i] > a[i + 1]) {
        hold = a[i];
        a[i] = a[i + 1];
        a[i + 1] = hold;
      }
    }
  }
}


void median(int answer[]) {
  printf("********\n Median\n********\n");
  printf("Input array:\n");
  printArray(answer);
  bubbleSort(answer);
  printf("Sorted array:\n");
  printArray(answer);
  printf("\n\nMedian: %d\n", answer[SIZE / 2]);
}


void mode(int freq[], const int answer[]) {
  int rating;
  int largest = 0;
  int modeValue = 0;
  int i;

  printf("\n********\n  Mode\n********\n");
  for (rating = 0; rating <= 9; rating++) {
    freq[rating] = 0;
  }
  for (i = 0; i < SIZE; i++) {
    ++freq[answer[i]];
  }
  printf("%s%11s%19s\n\n%54s\n%54s\n\n",
         "Response",
         "Frequency",
         "Histogram",
         "1    1    2    2",
         "5    0    5    0    5");
  for (rating = 0; rating <= 9; rating++) {
    printf("%8d%11d           ", rating, freq[rating]);
    if (freq[rating] > largest) {
      largest = freq[rating];
      modeValue = rating;
    }
    for (i = 1; i <= freq[rating]; i++) {
      printf("*");
    }
    printf("\n");
  }
  printf("Mode: %d (%d occurrences)", modeValue, largest);
}


int main() {
  int freq[10] = {0};
  int response[SIZE] = { 5, 6, 0, 9, 4, 6, 0, 9, 0, 9,
                         8, 9, 5, 0, 7, 0, 9, 5, 4, 6,
                         0, 9, 7, 6, 0, 9, 8, 6, 5, 7,
                         0, 9, 5, 6, 6, 4, 8, 6, 7, 6,
                         3, 4, 5, 6, 6, 0, 6, 7, 0, 9,
                         8, 5, 0, 9, 4, 8, 0, 9, 4, 5,
                         6, 8, 7, 2, 4, 5, 0, 9, 4, 3,
                         5, 6, 0, 9, 8, 4, 6, 8, 7, 5,
                         6, 9, 5, 8, 7, 3, 4, 8, 7, 6,
                         9, 8, 3, 0, 9, 8, 9, 3, 5};

  mean(response);
  median(response);
  mode(freq, response);
  return 0;
}
