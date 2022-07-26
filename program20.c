#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>

int main()
{
  mpz_t digits;
  char *res;
  int i;
  int sumOfDigits = 0;

  mpz_init(digits);
  mpz_fac_ui(digits, 100);
  res = mpz_get_str(NULL, 10, digits);
  for (i = 0; res[i]; i++) {
    sumOfDigits += res[i]-'0';
  }
  printf("%d\n", sumOfDigits);

  free(res);
  mpz_clear(digits);

  return 0;
}
