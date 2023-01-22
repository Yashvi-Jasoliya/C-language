#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    int odd;
    printf("Enter n numbers\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)

        {
            sum = sum + i;
        }
    }
    printf("sum = %d", sum);
    return 0;
}