//ZAD 5
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  int a,b;
  FILE *plik;
  srand(time(0));
  int tab[a];


  plik = fopen("test.txt", "r");
  if (plik != NULL) {
    fscanf(plik, "%d %d", &a, &b);
    fclose(plik);
  }

  plik = fopen("wynik.txt", "w");
  if (plik != NULL) {
    for (int i = 0; i < a; i++) {
      tab[i] = a + rand() % b-1;
      fprintf(plik, "%d\n", tab[i]);
    }
    fclose(plik);
  }
}
