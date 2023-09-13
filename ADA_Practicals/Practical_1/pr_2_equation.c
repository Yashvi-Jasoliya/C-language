#include <stdio.h>

int main(){

    int N, sum = 0;
    printf("Yashvi Jasoliya\n");

    printf("Enter number N :- ");
    scanf("%d", &N);

    sum = (N * (N + 1)) / 2;
    
    printf("The sum of numbers from 1 to %d :- %d", N, sum);
    return 0;
}
