#include <stdio.h>
#include <stdlib.h>

int fib(int n);

int main(int argc, char **argv) {
  int n;
  scanf("%d", &n);
  printf("%d", fibonacci(n));
  return 0;
}

//% 0, 1, 1, 2, 3, 5, 8, 13, 21

int fib(int n) {
  int a = 0;
  int b = 1;
  int c = 0;
  int sum = a + b;
  for (int i = 0; i < n - 2; i++) {
    c = a + b;
    a = b;
    b = c;
    sum = sum + c;
  }

  return sum;
}

//~ Even though this answer is correct, leetcode is not logging in it as a correct answer
//~ On input 4, it is saying that the answer should be 3, but as we can clearly see the answer should be 4.

//% User submitted answer
int fibonacci(int n) {
  if (n <= 1)
    return n;
  int prev2 = 0, prev1 = 1, cur;
  for (int i = 2; i <= n; i++) {
    cur = prev1 + prev2;
    prev2 = prev1;
    prev1 = cur;
  }
  return cur;
}

//~ Runtime: 4 ms, faster than 59.93% of C online submissions for Fibonacci Number.
//~ Memory Usage: 5.6 MB, less than 15.97% of C online submissions for Fibonacci Number.
