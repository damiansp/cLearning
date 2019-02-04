#include <stdio.h>

int main(int argc, char* argv[]) {
  int ages[] = {23, 43, 12, 89, 2};
  char* names[] = {"Alan", "Bertha", "Charles", "Denise", "Edward"};
  int n_bytes = sizeof(ages) / sizeof(int);

  for (int i = 0; i < n_bytes; i++) {
    printf("%s has lived for %d years.\n", names[i], ages[i]);
  }
  printf("---\n");


  int* cur_age = ages;
  char** cur_name = names;

  for (int i = 0; i < n_bytes; i++) {
    printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
  }
  printf("---\n");


  for (int i = 0; i < n_bytes; i++) {
    printf("%s is %d.\n", cur_name[i], cur_age[i]);
  }
  printf("---\n");


  for (cur_name = names, cur_age = ages;
       (cur_age - ages) < n_bytes;
       cur_name++, cur_age++) {
    printf("%s has already survived %d years.\n", *cur_name, *cur_age);
  }

  return 0;
}
