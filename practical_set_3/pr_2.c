#include<stdio.h>

int main(){
    float a, b, c;
    printf("Enter the three numbers :\n");
    scanf("%f %f %f", &a, &b, &c);
    if(a>b && a>c)
    {
        printf("a is max");
    }
    else if (a<b && b>c)
    {
        printf("b is max");
    }
    else 
    {
        printf("c is max");
    }
        

    return 0;
}