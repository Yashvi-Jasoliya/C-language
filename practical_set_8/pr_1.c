#include <stdio.h>
void max(int a, int b)
{
    if (a > b)
    {
        printf("a=%d is max", a);
    }
    else
    {
        printf("b = %d is max", b);
    }
}

int main()
{
    int a, b;
    printf("Enter a and b\n");
    scanf("%d%d", &a, &b);
    max(a, b);

    return 0;
}