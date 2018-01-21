//ZAD 1, 2, 3
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  printf("%d\n", argc-1);

  for (int i = 0; i < argc; i++) {
    printf("%s\n", argv[i]);

    if (strcmp(argv[i],"-c") == 0) {
      printf("uzyto\n");
    }
  }


}
