//The question :-
// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

#include<stdio.h> 
#include<stdlib.h> 
#include<stdint.h>

int main(int argc, char* argv[]){

  uint64_t N = 600851475143ULL;
  uint64_t div = 2ULL;

  //We also observe here that prime divisors of a number always occur in pair about it's square root
  //that means div < √N, and that can be written as div * div < N

  while(div*div < N){ 
    if((N % div) == 0){
      N /= div;
      continue;
    }
    ++div;
  }

  printf("Largest Divisor: %d\n", N); 

  return 0; 
} 

//In this problem, we observed that to find the divisors of a number, we don't actually need to run the loop from 0 to that number, but that when we divide a number by its prime divisor, the resulting number doesn't lose any other prime divisors, so we can make that our new number and use that as a basis to find the other divisors.