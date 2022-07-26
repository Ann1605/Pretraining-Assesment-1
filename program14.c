//14. series count

#include <stdio.h>


long int seriesLength(long int n)
{
  long int c = 0;
  while (n > 1) {
    n = n%2==0 ? n/2 : 3*n+1;
    c++;
  }
  return c+1;
}

int main()
{
  long int i, maxVal = 0, num = 0;

  for (i = 1; i < 1000000; i++) {
    long int temp = seriesLength(i);
    if (temp > maxVal) {
      maxVal = temp;
      num = i;
    }
  }
  printf("%ld\n", num);
  return 0;
}