
#include<stdio.h>

int main(){

int n,sum = 0;
printf("Yashvi Jasoliya\n");

printf("Enter the n :- ");
scanf("%d", &n);

for (int i = 1; i <= n; i++)
{
    sum = sum + i;
}

printf("The sum of numbers from 1 to %d :- %d", n,sum);
return 0;
}
