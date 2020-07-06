#include <stdio.h>


int main() {
  struct entry {
    int value;
    struct entry *prev;
    struct entry *next;
  };

  struct entry n1, n2, n3;
  n1.value = 100;
  n2.value = 200;
  n3.value = 300;
  n1.next = &n2;
  n2.next = &n3;
  n2.prev = &n1;
  n3.prev = &n2;
  
  printf("n1.value %d\n", n1.value);    // 100
  printf("next: %d\n", n1.next->value); // 200
  printf("next: %d\n", n2.next->value); // 300
  printf("prev: %d\n", n3.prev->value); // 200
  printf("prev: %d\n", n2.prev->value); // 100
  return 0;
}
