#include <stdio.h>

int main()
{
  long int res1[] = { 0, 3, 3, 5, 4, 4, 3, 5, 5, 4 };

  long int res2[] = { 3, 6, 6, 8, 8, 7, 7, 9, 8, 8 };

  long int res3[] = { 0, 0, 6, 6, 5, 5, 5, 7, 6, 6 };

  long int hundred = 7;
  long int and = 3;
  long int thousand = 8;

  long int i;
  long int sum = 0;

  for (i = 1; i < 10; i++) {
    sum += res1[i];
  }
  
  for (i = 0; i < 10; i++) {
    sum += res2[i];
  }

  for (i = 20; i < 100; i++) {
    sum += res3[i/10] + res1[i%10];
  }

  for (i = 1; i < 10; i++) {
    int j;

    sum += res1[i] + hundred;

    for (j = 1; j < 10; j++) {
      sum += res1[i] + hundred + and + res1[j];
    }

    for (j = 0; j < 10; j++) {
      sum += res1[i] + hundred + and + res2[j];
    }

    for (j = 20; j < 100; j++) {
      sum += res1[i] + hundred + and + res3[j/10] + res1[j%10];
    }
  }

  sum += res1[1] + thousand;

  printf("%ld\n", sum);

  return 0;
}