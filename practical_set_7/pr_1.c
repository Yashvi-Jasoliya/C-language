#include <stdio.h>

int main()
{
  int n = 10;
  int a[n], i;
  printf("Enter n numbers:\n");

  for (i = 1; i <= n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("\nreverse numbers are : \n");
  for (i = n; i >= 1; i--)
  {
    printf("%d\n", a[i]);
  }

  return 0;
}