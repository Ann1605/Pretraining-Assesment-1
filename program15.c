#include <stdio.h>
#include <gmp.h>

int main()
{
  mpz_t a, b;
  mpz_init(a);
  mpz_init(b);
  mpz_fac_ui(a, 40);
  mpz_fac_ui(b, 20);
  mpz_mul(b, b, b);
  mpz_divexact(a, a, b);
  mpz_out_str(stdout, 10, a);
  putchar('\n');
  mpz_clear(a);
  mpz_clear(b);
  return 0;
}