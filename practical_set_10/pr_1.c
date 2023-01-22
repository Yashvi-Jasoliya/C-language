#include<stdio.h>
    void swap(int *a, int *b)
    {
        int c= *a;
        *a = *b;
        *b = c;

    }
int main(){
    int a, b;
    printf("Enter the value of a: \n");
    scanf("%d", &a);
    printf("Enter the value of b: \n");
    scanf("%d", &b);

    swap(&a, &b);

    printf("After swaping value of a:%d\n", a);
    printf("After swaping value of b:%d", b);

    
    return 0;
}