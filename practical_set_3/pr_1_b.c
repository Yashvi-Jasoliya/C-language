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
    else
    {
        printf("Number is ODD\n");
    }
    return 0;
}