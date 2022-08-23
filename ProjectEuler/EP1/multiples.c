#include <stdio.h>
#include <stdlib.h>
#include <time.h> //for clock_t, clock(), CLOCKS_PER_SEC

#define BEGIN \
  double time_spent = 0.0;\
  clock_t begin = clock();
#define END \
  clock_t end = clock();\
  time_spent += (double)(end - begin) / CLOCKS_PER_SEC;\
  printf("[Finished in %f]", time_spent);

int sum_of_multiples(int, int, int);

int main(int argc, char *argv[]) {
  BEGIN

  #define N 1000

  printf("the sum of the multiples of 3 and 5 below %d is: %d", N, sum_of_multiples(3, 5, N));

  END
  return 0;
}

int sum_of_multiples(int a, int b, int n){
  int sum = 0;

  for(int i = 0; i < n; i++){
    if(i % a == 0 || i % b == 0){
      sum += i;
    }
    // if(i % a == 0 && i % b == 0){
    //   sum -= i;
    // }
  }

  return sum;
}