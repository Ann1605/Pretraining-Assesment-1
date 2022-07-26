//5. smallest positive numbers

#include <stdio.h>

long int gcd(long int a,long int b)
{
  long int rem;

  if (a > b) {
    long int t = a;
    a = b;
    b = t;
  }
  rem = a%b;
  while (rem) {
    a = b;
    b = rem;
    rem = a%b;
  }
  return b;
}

long int lcm(long int a,long int b)
{
  long int p = (long int) (a * b);
  return p/gcd(a, b);
}


int main()
{
  long int ans = 1;
  long int i;

  for (i = 1; i <= 20; i++) {
    ans = lcm(ans, i);
  }
  printf("%lu\n", ans);
  return 0;
}