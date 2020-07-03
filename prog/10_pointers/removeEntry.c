// Insert a value into a linked list
#include <stdio.h>


struct entry {
  int value;
  struct entry *next;
};


void removeEntry(struct entry *prior) {
  prior->next = prior->next->next;
}


int main() {
  struct entry n1, n2, n3;
  n1.value = 100;
  n2.value = 200;
  n3.value = 300;
  n1.next = &n2;
  n2.next = &n3;
  
  printf("n1.value: %d\n", n1.value);
  printf("n1.next->value: %d\n", n1.next->value);
  printf("n2.value: %d\n", n2.value);
  printf("n2.next->value: %d\n", n2.next->value);
  
  printf("\nRemoving entry after n1.\n");
  removeEntry(&n1);
  printf("n1.value: %d\n", n1.value);
  printf("n1.next->value: %d\n", n1.next->value);
  printf("n3.value: %d\n", n3.value);
}
