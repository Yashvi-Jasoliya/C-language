#include<stdio.h>

int main(){
    float radius, area, pi;
    pi = 3.14;
    printf("Enter the value of r : \n");
    scanf("%f", &radius);

    area = pi*radius*radius;

    printf("Area of this circle is = %0.2f\n", area);
    return 0;
}