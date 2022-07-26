//10. sum of primes below 2 million



#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char *primeFactors;
  long int i, j;
  long int n = 2000000;
  long int sum = 0;

  primeFactors = calloc(n, sizeof *primeFactors);
  for (i = 2; i < n; i++) {
    if (!primeFactors[i]) {
      sum += i;
      for (j = i*2; j < n; j += i) {
        primeFactors[j] = 1;
      }
    }
  }
  free(primeFactors);

  printf("%ld\n", sum);

  return 0;
}