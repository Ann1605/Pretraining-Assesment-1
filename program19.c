//19. how many sunday


#include <stdio.h>


int days(int y, int m)
{
  switch (m) {
    case 2:
      if ((y%4 == 0 && y%100 != 0) || y%400 == 0) {
        return 29;
      }
      else {
        return 28;
      }
    case 4:
    case 6:
    case 9:
    case 11:
      return 30;
    default:
      return 31;
  }
}

int main()
{
  int year, day = 0, sun = 0, mon;

  for (year = 1901; year <= 2000; year++) {
    for (mon = 1; mon <= 12; mon++) {
      if (day == 5) {
        sun++;
      }
      day = (day + days(year, mon))%7;
    }
  }
  printf("%d\n", sun);

  return 0;
}