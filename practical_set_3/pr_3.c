#include <stdio.h>

int main()
{
    float a, b;
    char operator;

    printf("Enter the value of a:\n");
    scanf("%f", &a);
    printf("Enter the value of b:\n");
    scanf("%f", &b);

    printf("choose your operator:\n");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        printf("Addition of a+b is = %f\n", a + b);
        break;
    case '-':
        printf("Substraction of a-b is = %f\n", a - b);
        break;
    case '*':
        printf("Multiplication of a*b is = %f\n", a * b);
        break;
    case '/':
        printf("Division of a/b is = %f\n", a / b);
        break;
    default:
        printf("Invalid operator\n");
        break;
    }

    return 0;
}