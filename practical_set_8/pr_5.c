#include<stdio.h>
#include<string.h>

int length(char str[])
{
    return strlen(str);
}

int main(){
    char str[25];

    printf("Enter the string: \n");
    scanf("%s", str);
    printf("The length of string st is %d",length(str));
    return 0;
}