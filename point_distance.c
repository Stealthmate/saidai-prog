#include <stdio.h>
#include <math.h>

typedef struct {
  double x;
  double y;
} Point;

double distance(Point a, Point b) {
  double dx = a.x - b.x;
  double dy = a.y - b.y;

  return sqrt((dx*dx) + (dy*dy));
}

int main(void) {
  Point a = {0, 1};
  Point b = {0, -5};

  printf("%lf\n", distance(a, b));
  return 0;
}
