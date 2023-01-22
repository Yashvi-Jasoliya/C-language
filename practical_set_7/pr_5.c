#include <stdio.h>

int main()
{
    int i, n, num;

    printf("Enter the n number:");
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        printf("--\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                num = a[i];
                a[i] = a[j];
                a[j] = num;
            }
        }
        printf("%d\n", a[i]);
    }
    return 0;
}