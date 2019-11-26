#include <stdio.h>

struct rect {
  int left,
    bottom,
    right,
    top;
};


typedef struct {
  int bottom,
    left,
    height,
    width;
} r2;


int main() {
  struct rect myRect;
  myRect.left = -4;
  myRect.bottom = 1;
  myRect.right = 8;
  myRect.top = 6;

  r2 yourRect;
  yourRect.left = -4;
  yourRect.bottom = 1;
  yourRect.height = 5;
  yourRect.width = 12;

  printf("My Rect:\n");
  printf("Bottom left: (%d, %d)\n", myRect.left, myRect.bottom);
  printf("Top right: (%d, %d)\n", myRect.right, myRect.top);
  printf("\nYour Rect:\n");
  printf("Bottom left: (%d, %d)\n", yourRect.left, yourRect.bottom);
  printf("Top right: (%d, %d)\n",
         yourRect.left + yourRect.width,
         yourRect.bottom + yourRect.height);
  
  return 0;
}

  
