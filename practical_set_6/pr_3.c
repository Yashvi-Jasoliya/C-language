#include <stdio.h>

int main()
{
  int i, j, k;

  for (i = 0; i <= 5; i++)
  {

    for (j = 1; j <= i; j++)
    {

      printf(" ");
    }
    for (k = 1; k <= 5 - i; k++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}