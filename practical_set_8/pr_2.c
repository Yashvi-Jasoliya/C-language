#include<stdio.h>

    int sum(int n)
    {
        int a, s=0;
        for(int i=0; n!=0; i++)
        {
            a=n%10;
            s=s+a;
            n = n/10;
        }
    
    return s;
}

int main(){
    int n,u;
    printf("Enter the number:");
    scanf("%d", &n);
    u=sum(n);
    printf("sum of these number is = %d",u);
    return 0;
}