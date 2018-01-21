//ZAD 8
// -lm
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

typedef struct position{
  int x;
  int y;
}position;

int main(int argc, char const *argv[]) {
  position p;
  position q;
  p.x = 1;
  p.y = 3;
  q.x = 4;
  q.y = 6;

  int odlx = abs(p.x - q.x);
  int odly = abs(p.y - q.y);
  printf("%d\n", odlx);
  printf("%d\n", odly);

  double odl = sqrt((odlx*odlx)+(odly*odly));

  printf("%lf\n", odl);
}
