#include<stdio.h>
int add(int num)
{
    if(num > 0)
    {
        return(num%10 + add(num/10));

    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    printf("Enter the 5 digits: \n");
    scanf("%d",&num);
    printf("sum of digits number is = %d\n", add(num));
    
    return 0;
}




