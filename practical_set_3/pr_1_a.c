#include <stdio.h>

int main()
{
    int number;

    printf("Enter the number :\n");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("Number is EVEN\n");
    }
    return 0;
}