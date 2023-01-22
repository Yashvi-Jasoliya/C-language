#include<stdio.h>

int main(){
    int i,k, sum=0;

    printf("Entet the value of k\n");
    scanf("%d", &k);
    for(i=0; i<=k; i++)
    {
        sum = sum + i;
    }
    printf("sum = %d", sum);

    return 0;
}