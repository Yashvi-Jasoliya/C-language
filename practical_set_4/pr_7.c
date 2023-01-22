#include <stdio.h>

int main()
{

    int i, n, sum = 0;

    for (i = 101; i < 200; i++)
    {
        if (i % 5 == 0)
        {
            sum = sum + i;
        }
    }
    printf("sum = %d", sum);

    return 0;
}