#include<stdio.h>
int fact(int num)
{
    if(num >= 1)
    {
        return(num*fact(num-1));
    }
    else
    {
        return 0;
    }
}
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("factorial of %d is: %d",num, fact(num));
    
    return 0;
}