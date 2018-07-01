#include <stdio.h>

int main(int argc, char* argv[]) {
  int i = 0;

  if (argc == 1) {
    printf("You suck.  Only 1 argument, psht.\n");
  } else if (argc > 1 && argc < 4) {
    printf("Your arguments:\n");
    for (i = 0; i < argc; i++) {
      printf("  %s\n", argv[i]);
    }
  } else {
    printf("Whoa! Chill with the args, already.\n");
  }
  return 0;
}
