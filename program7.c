//7. 10001st prime number

#include <stdio.h>
#include <stdlib.h>

int main()
{
  char *prime;
  long int i;
  unsigned count = 0;
  long int n = 1000000;
  const long int target = 10001;

  prime = calloc(n, sizeof *prime);
  for (i = 2; i < n; i++) {
    if (!prime[i]) {
      long int j;

      count++;
      if (count == target) {
        printf("%lu\n", i);
        break;
      }
      for (j = i*2; j < n; j += i) {
        prime[j] = 1;
      }
    }
  }
  free(prime);

  return 0;
}