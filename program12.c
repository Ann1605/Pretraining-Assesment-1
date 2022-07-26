//12. sequence of triangle number 


#include <stdio.h>

long int divisor_count(unsigned long n)
{
  long int res = 1;
  long int i;

  for (i = 2; i <= n; i++) {
    long int c = 0;
    while (n % i == 0) {
      c++;
      n /= i;
    }
    res *= c+1;
  }
  return res;
}

int main()
{
    long int i = 1, n = 1;

    while (divisor_count(n) < 500) {
        i+=1;
        n += i;
        
    }
  printf("%lu\n", n);
  return 0;
}