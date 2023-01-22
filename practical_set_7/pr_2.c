#include <stdio.h>

int main()
{
    int a[10];

    float sum = 0;
    for (int i = 0; i < 10; i++)
    {

        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    int max = a[0];   
    int min = a[0];
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }

        if (a[i] <= min)
        {
            min = a[i];
        }
    }
    printf("sum=%f\n", sum);
    printf("max = %d\n", max);
    printf("min = %d\n", min);
    printf("average = %f", sum / 10);

    return 0;
}