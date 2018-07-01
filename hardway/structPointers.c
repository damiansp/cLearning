#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Person {
  char* name;
  int age;
  int height;
  int weight;
};


struct Person* Person_create(char* name, int age, int height, int weight) {
  struct Person* who = malloc(sizeof(struct Person));
  assert(who != NULL);

  who->name = strdup(name);
  who->age = age;
  who->height = height;
  who->weight = weight;
  return who;
}


void Person_destroy(struct Person* who) {
  printf("Destroying %s\n", who->name);
  assert(who != NULL);
  free(who->name);
  free(who);
}


void Person_print(struct Person* who) {
  printf("Name: %s\n", who->name);
  printf("\tAge: %d\n", who->age);
  printf("\tHeight: %d\n", who->height);
  printf("\tWeight: %d\n", who->weight);
}


int main(int argc, char* argv[]) {
  struct Person* ringo = Person_create("Ringo Starr", 72, 63, 190);
  struct Person* john = Person_create("John Lennon", 70, 70, 175);

  printf("Ringo is at memory location %p:\n", ringo);
  Person_print(ringo);
  printf("John is at memory location %p:\n", john);
  Person_print(john);

  ringo->age -= 40;
  john->age -=40;

  Person_print(ringo);
  Person_print(john);
  Person_destroy(ringo);
  Person_destroy(john);
  return 0;
}
