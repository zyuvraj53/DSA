#include <stdio.h>

int main(){

  int a = 1, b = 2;
  int c = 0;
  int sum = 2;

  // printf("%d\n", a);
  // printf("%d\n", b);

  #define N 4000000

  while(c < N){

    // printf("%d\n", c);

    if(c % 2)
      sum += c;

    c = a + b;
    a = b;
    b = c;

  }

  printf("The sum is upto %d for the even terms is: %d", N, sum);

  return 0;
}