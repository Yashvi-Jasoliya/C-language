#include <stdio.h>

int main()
{
  int a[10], i;
  float sum = 0;
  
  printf("Enter 10 numbers\n");
  for (i = 0; i < 10; i++)
  {
    scanf("%d", &a[i]);
  }
  int max = a[0]; 

  for (i = 0; i < 10; i++)
  {
    if (a[i] % 2 == 0)
    {

      sum = sum + a[i];
      if (a[i] > max)
      {
        max = a[i];
      }
    }
  }

  printf("sum=%f\n", sum);
  printf("max=%d", max);

  return 0;
}