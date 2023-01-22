#include <stdio.h>

int main()
{
    float x;

    printf("Enter the value of x :\n ");
    scanf("%f", &x);

    printf("The value of 4*x*x*x-5*x+9 = %0.2f\n", (4 * x * x * x) - 5 * x + 9);

    return 0;
}