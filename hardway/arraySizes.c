#include <stdio.h>

int main(int argc, char* argv[]) {
  int areas[] = {10, 12, 13, 14, 20};
  char name[] = "Zed";
  char full_name[] = {
    'Z', 'e', 'd', ' ', 'A', '.', ' ', 'K', 'i', 'n', 'g', '\0'};

  printf("Size of int: %ld\n", sizeof(int));
  printf("Size of areas (int[]): %ld\n", sizeof(areas));
  printf("No. ints in areas: %ld\n", sizeof(areas) / sizeof(int));
  printf("areas = %d, %d, ...", areas[0], areas[1]);
  printf("char: %ld\n", sizeof(char));
  printf("name (char[]): %ld\n", sizeof(name));
  printf("N chars in name: %ld\n", sizeof(name) / sizeof(char));
  printf("full_name (char[]): %ld\n", sizeof(full_name));
  printf("N chars: %ld\n",  sizeof(full_name) / sizeof(char));
  printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);
  return 0;
}
