//6. sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <stdio.h>

int main()
{
  long int a = 0, b = 0, i;

  for (i = 1; i <= 100; i++) {
    a += i*i;
    b += i;
  }
  printf("%ld\n",b*b- a);
  return 0;
}