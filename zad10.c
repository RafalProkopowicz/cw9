//ZAD 9
// -lm
// potrzebne sa tylko 2 punkty naprzeciw siebie
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

#define n 5

typedef struct osoba{
  int wiek;
  int pensja;
}osoba;

int main(int argc, char const *argv[]) {
  srand(time(0));
  int spensja = 0;
  int swiek = 0;

  //int *ludzie = malloc(5*sizeof(int));

  struct osoba osoby[n];

  //random wartosci
  for (size_t i = 0; i < 5; i++) {
    osoby[i].wiek = 1 + rand() % 100;
    osoby[i].pensja = 1 + rand() % 10000;
  }

  for (size_t j = 0; j < 5; j++) {
    printf("%d %d\n", osoby[j].wiek, osoby[j].pensja);
    swiek += osoby[j].wiek;
    spensja += osoby[j].pensja;
  }

  printf("sredni wiek = %d | srednia pensja = %d\n", swiek/5, spensja/5);

  //free(osoby);
}
