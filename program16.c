#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>

int main()
{
  mpz_t digits;
  char *str;
  size_t len, i;
  long int res = 0;

  mpz_init(digits);
  mpz_ui_pow_ui(digits, 2, 1000);

  str = mpz_get_str(NULL, 10, digits);
  len = mpz_sizeinbase(digits, 10);
  
  for (i = 0; i < len; i++)
  {
    res += str[i]-'0';
  }
  printf("%ld\n", res);
  free(str);
  mpz_clear(digits);
  return 0;
}