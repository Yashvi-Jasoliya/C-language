#include<stdio.h>

int sum(int n){
// Base
 if (n==1){
    return 1;
 }
 // Recursive
 else{
    return n + sum(n - 1);
 }
}


int main(){

int N;
printf("Yashvi Jasoliya\n");

printf("Enter the N :- ");
scanf("%d", &N);

int result = sum(N);
printf("The sum of numbers from 1 to %d :- %d", N,result);

    return 0;
}
