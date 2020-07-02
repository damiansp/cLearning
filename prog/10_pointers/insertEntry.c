// Insert a value into a linked list
#include <stdio.h>


struct entry {
  int value;
  struct entry *next;
};


void insertEntry(struct entry *insert, struct entry *after) {
  insert->next = after->next;
  after->next = insert;
}


int main() {
  struct entry n1, n2, n3;
  n1.value = 100;
  n2.value = 200;
  n3.value = 300;
  n1.next = &n3;
  
  printf("n1.value: %d\n", n1.value);
  printf("n1.next->value: %d\n", n1.next->value);
  printf("n3.value: %d\n", n3.value);

  printf("Inserting n2 (200) after n1.\n");
  insertEntry(&n2, &n1);
  printf("n1.value: %d\n", n1.value);
  printf("n1.next->value: %d\n", n1.next->value);
  printf("n2.value: %d\n", n2.value);
  printf("n2.next->value: %d\n", n2.next->value);
}
