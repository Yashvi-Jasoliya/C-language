#include<stdio.h>

int main()
{
   int i, size, a[10];
   int count_odd = 0, count_even=0;
   printf("Enter the size of array\n");
   scanf("%d", &size);

    printf("Enter the array Elements\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=0; i<size; i++)
    {
        if(a[i] % 2==0){
        count_even++;
        }
        else{
        count_odd++;
        }
    }
    printf(" Total Even Numbers : %d\n", count_even);
    printf(" Total Odd Numbers : %d\n", count_odd);
     return 0;
}