#include<stdio.h>

int main(){
    int principal=100, rate=4, year=1;
    int simpleInterest = (principal * rate * year)/100;
    printf("The value of simple Interest is %d",simpleInterest);
    return 0;
}