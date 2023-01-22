#include<stdio.h>
void swap(int a[], int n)
{
    int num;
    printf("\n");
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++){
            num = a[i];
            a[i] = a[j];
            a[j] = num;

        }
       
        printf("%d",a[i]);
    }
}

int main()
{
    int a[10];
    for(int i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    swap(a,10);
    return 0;
}