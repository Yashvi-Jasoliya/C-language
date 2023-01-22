#include <stdio.h>

int main()
{
  int i = 1, sum = 0;
  while (i <= 100)
  {
    sum = sum + i;

    i++;
  }
  printf("sum of the first 100 numbers = %d", sum);

  return 0;
}