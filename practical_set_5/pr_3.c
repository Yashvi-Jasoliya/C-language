#include <stdio.h>

int main()
{
  int n1 = 0, n2 = 1, nextTerm, i, num;

  printf("Enter the number\n");
  scanf("%d", &num);
  printf("fibonacci series : %d, %d, ", n1, n2);
  for (i = 2; i <= num; ++i)
  {
    nextTerm = n1 + n2;
    printf("%d, ", nextTerm);
    n1 = n2;
    n2 = nextTerm;
  }
  return 0;
}