#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4


int minimum(const int grades[][EXAMS], int pupils, int tests);
int maximum(const int grades[][EXAMS], int pupils, int tests);
double mean(const int setOfGrades[], int tests);
void printArray(const int grades[][EXAMS], int pupils, int tests);


int main() {
  int student;
  const int studentGrades[STUDENTS][EXAMS] = {{77, 68, 86, 73},
                                              {96, 87, 89, 78},
                                              {70, 90, 86, 81}};
  printf("The array is:\n");
  printArray(studentGrades, STUDENTS, EXAMS);
  printf("\n\nLowest grade %d\nHighest grade: %d\n",
         minimum(studentGrades, STUDENTS, EXAMS),
         maximum(studentGrades, STUDENTS, EXAMS));
  for (student = 0; student < STUDENTS; student++) {
    printf("The mean grade for student %d was %.2f\n",
           student,
           mean(studentGrades[student], EXAMS));
  }
  return 0;
}


int minimum(const int grades[][EXAMS], int pupils, int tests) {
  int low = 100;

  for (int i = 0; i < pupils; i++) {
    for (int j = 0; j < tests; j++) {
      if (grades[i][j] < low) { low = grades[i][j]; }
    }
  }
  return low;
}


int maximum(const int grades[][EXAMS], int pupils, int tests) {
  int high = 0;
  
  for (int i = 0; i < pupils; i++) {
    for (int j = 0; j < tests; j++) {
      if (grades[i][j] > high) { high = grades[i][j]; }
    }
  }
  return high;
}


double mean(const int setOfGrades[], int tests) {
  int total = 0;

  for (int i = 0; i < tests; i++) {
    total += setOfGrades[i];
  }
  return (double) total / tests;
}


void printArray(const int grades[][EXAMS], int pupils, int tests) {
  printf("                 [0]  [1]  [2]  [3]" );
  for (int i = 0; i < pupils; i++) {
    printf("\nstudentGrades[%d] ", i);
    for (int j = 0; j < tests; j++) { printf("%-5d", grades[i][j]); }
  }
}
