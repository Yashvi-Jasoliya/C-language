#include<stdio.h>

int main(){
    int a = 3;
    printf("%d %d %d", a, ++a, a++);    // argument order right to left
    return 0;
}