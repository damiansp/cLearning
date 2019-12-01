#include <stdio.h>


typedef struct Rects {
  float left;
  float bottom;
  float top;
  float right;
} Rect;


double max(double n1, double n2) {
  return n1 > n2 ? n1 : n2;
}


double min(double n1, double n2) {
  return n1 < n2 ? n1 : n2;
}


Rect getIntersection(Rect r1, Rect r2) {
  Rect ans;
  ans.left = max(r1.left, r2.left);
  ans.right = min(r1.right, r2.right);
  ans.top = min(r1.top, r2.top);
  ans.bottom = max(r1.bottom, r2.bottom);
  return ans;
}


int main() {
  Rect r1;
  r1.left = -1;
  r1.right = 1;
  r1.top = 3;
  r1.bottom = -3;
  Rect r2;
  r2.left = -3;
  r2.right = 3;
  r2.top = 1;
  r2.bottom = -1;
  Rect inter = getIntersection(r1, r2);
  printf("Left: %.1f\nRight: %.1f\nTop: %.1f\nBottom: %.1f\n",
         inter.left, inter.right, inter.top, inter.bottom);
  return 0;
}
