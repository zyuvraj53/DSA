#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BEGIN \
  double time_spent = 0.0;\
  clock_t begin = clock();
#define END \
  clock_t end = clock();\
  time_spent += (double)(end - begin) / CLOCKS_PER_SEC;\
  printf("[Finished in %f]", time_spent);

int main(int argc, char *argv[]) {
  BEGIN

  myAtoI();

  END
  return 0;
}