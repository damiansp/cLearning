#include <stdio.h>

int main(int argc, char* argv[]) {
  for (int i = 1; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  char* states[] = {"Washington", "Oregon", "California", "Arizona"};
  int n_states = 4;

  for (int i = 0; i < n_states; i++) {
    printf("State %d: %s\n", i, states[i]);
  }
  return 0;
}
