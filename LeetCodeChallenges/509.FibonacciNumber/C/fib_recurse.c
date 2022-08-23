#include <stdio.h>
#include <stdlib.h>

int fib_recurse(int n);

int main(int argc, char **argv) {
  int n;
  scanf("%d", &n);
  printf("%d", fib_recurse(n));

  return 0;
}

int fib_recurse(int n){
  if(n == 0) return 0;
  if(n == 1) return 1;
  return fib_recurse(n-1) + fib_recurse(n-2);
}

//~ Runtime: 19 ms, faster than 20.22% of C online submissions for Fibonacci Number.
//~ Memory Usage: 5.4 MB, less than 66.16% of C online submissions for Fibonacci Number 