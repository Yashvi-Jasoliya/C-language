#include<stdio.h>
int add(int num)
{
    if(num > 0)
    {
        return(num + add(num-1));

    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    printf("Enter the n numbers: \n");
    scanf("%d",&num);
    printf("sum of  %d number is = %d\n", num, add(num));
    
    return 0;
}
