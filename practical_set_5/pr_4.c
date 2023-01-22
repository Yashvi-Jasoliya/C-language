#include <stdio.h>
#include <math.h>

int main()
{
    int num_1, num_2, num_3, m, i, Num = 1;
    printf("Armstrong numbers between 0 to 999 :\n");
    for (i = 0; i <= 999; i++)
    {
        num_1 = i / 100;
        num_3 = i % 10;
        m = i / 10;
        num_2 = m % 10;
        Num = pow(num_1, 3) + pow(num_2, 3) + pow(num_3, 3);
        if (i == Num)
        {
            printf("Number = %d\n", Num);
        }
    }
    return 0;
}