#include<stdio.h>
void fibbo(int n)
{
    int n1=0, n2=1, nextterm;
     printf("%d,%d", n1, n2);
    for(int i = 2; i<=n; i++)
    {
        nextterm = n1+n2;  
        printf(",%d", nextterm);
        n1 = n2;   
        n2 = nextterm;  
    }

}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    fibbo(n);
    return 0;
}