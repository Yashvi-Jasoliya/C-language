#include <stdio.h>

int main()
{
    int n;

    printf("Enter n numbers : ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max_odd = a[0];
    int max_even = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            if (a[i] > max_even)
            {
                // printf("%d",a[i]);
                max_even = a[i];
            }
        }
        if (a[i] % 2 != 0)
        {
            if (a[i] > max_odd)
            {
                max_odd = a[i];
            }
        }
    }
    printf("\nmax_even num = %d\n", max_even);
    printf("max_odd num = %d\n", max_odd);

    return 0;
}