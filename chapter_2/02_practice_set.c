#include<stdio.h>

int main(){
    int a; int b=a;
    // int a; b=a  .....-> invalid

    int v = 3^3;
    printf("%d\n", v);     // valid ,but not show 27 but in C that is valid

    float d = (3.0/8-2);
    printf("%f\n", d);  // float, also called double

    //Q3 write a program to determine whether a number is divisible by 97 or not

    //int num;
    //printf("Enter the number\n");
    //scanf("%d", &num);
    //printf("Divisibility test returns: %d\n", num%97); 

    // Q4. step by step evalution of 3*x/y-z+k

    int x = 2, y = 3, z = 3, k = 1;
    int result = 3 * x / y - z + k;
    // 6/3 - 3 + 1
    // 2 - 3 + 1
    //2 - 3 + 1
    // 0
    printf("The value of result is %d", result); 
    return 0;
}