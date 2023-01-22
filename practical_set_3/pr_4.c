#include <stdio.h>

int main()
{
    int number;
    printf("Enetr the number\n");
    scanf("%d", &number);
    switch (number)
    {
    case 1:
        printf("MONDAY");
        break;
    case 2:
        printf("TUESDAY");
        break;
    case 3:
        printf("WEDNESDAY");
        break;
    case 4:
        printf("THURSDAY");
        break;
    case 5:
        printf("FRIDAY");
        break;
    case 6:
        printf("SATURDAY");
        break;
    case 7:
        printf("SUNDAY");
        break;
    default:
        printf("Enter valid number");
        break;
    }
    return 0;
}