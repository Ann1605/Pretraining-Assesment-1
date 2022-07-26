//9. pythagorean triplet


#include <stdio.h>

int main()
{
  int a, b;

  for (a = 1; a <= 449; a++) {
    for (b = a; b <= 450; b++) {
      int c = (1000 - a - b);
      if (a*a + b*b == c*c) {
        printf("%d\n", a * b * c);
      }
    }
  }
  return 0;
}