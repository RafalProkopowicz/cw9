//ZAD 7
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

typedef struct truefalse{
  char *a[];
  char *b[];
}truefalse;

int main(int argc, char const *argv[]) {
  truefalse x;
  x.a = {"true"};
  x.b= {"false"};
}
