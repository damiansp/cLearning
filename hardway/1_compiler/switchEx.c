#include <stdio.h>

int main(int argc, char* argv[]) {
  if (argc != 2) {
    printf("ERROR: argument needed.\n");
    return 1;
  }

  int consonants = 0;
  
  for (int i = 0; argv[1][i] != '\0'; i++) {
    char letter = argv[1][i];

    switch (letter) {
    case 'a':
    case 'A':
      printf("%d: 'A'\n", i); break;
    case 'e':
    case 'E':
      printf("%d: 'E'\n", i); break;
    case 'i':
    case 'I':
      printf("%d: 'I'\n", i); break;
    case 'o':
    case 'O':
      printf("%d: 'O'\n", i); break;
    case 'u':
    case 'U':
      printf("%d: 'U'\n", i); break;
    case 'y':
    case 'Y':
      if (i % 2 == 0) {
        printf("%d: 'Y'\n", i);
      }
      break;
    default:
      consonants++;
    }
  }
  printf("...and %d consonants\n", consonants);
  return 0;
}
