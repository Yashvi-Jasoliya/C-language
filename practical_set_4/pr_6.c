#include <stdio.h>

int main()
{
    int n;
    float i, num1 = 1;

    printf("Enter the number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
      //  num1 = num1 + i / ((float)i);
        if (i == 1)
            printf("\n1+");
        else if (i == n)
            printf("(1/%.0f)", i);
        else
            printf("(1/%.0f)+", i);
    }

    return 0;
}