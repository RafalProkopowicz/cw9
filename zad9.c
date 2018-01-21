//ZAD 9
// -lm
// potrzebne sa tylko 2 punkty naprzeciw siebie
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

typedef struct punkt{
  int x;
  int y;
}punkt;

typedef struct prostokat{
  punkt a;
  punkt b;
  punkt c;
  punkt d;
}prostokat;

int main(int argc, char const *argv[]) {
  prostokat prostokat1;
  prostokat1.a.x = 1;
  prostokat1.a.y = 1;

  prostokat1.b.x = 1;
  prostokat1.b.y = 3;

  prostokat1.c.x = 4;
  prostokat1.c.y = 3;

  prostokat1.d.x = 4;
  prostokat1.d.y = 1;

  int odlx = abs(prostokat1.a.x - prostokat1.c.x);
  int odly = abs(prostokat1.a.y - prostokat1.c.y);
  printf("%d\n", odlx);
  printf("%d\n", odly);

  double odl = sqrt((odlx*odlx)+(odly*odly));

  double pole = odlx*odly;
  double obwod = 2*odlx+2*odly;

  printf("pole = %lf | obwod = %lf\n", pole, obwod);
}
