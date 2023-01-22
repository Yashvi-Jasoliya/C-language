#include <stdio.h>

int main()
{
  int i = 1, sum = 0;
  do
  {
    sum = sum + i;
    i++;

  } while (i <= 100);
  printf("sum of the first 100 numbers = %d", sum);

  return 0;
}