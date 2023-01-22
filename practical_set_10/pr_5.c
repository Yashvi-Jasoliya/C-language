#include<stdio.h>
#include<string.h>
 int length(char *str)
{
    return strlen(str);
}
    
int main()
{
    char str[30];
    printf("Enter the string: ");
    scanf("%s", str);
    char *ptr;
    ptr = &str[0];    // dout
    printf("The length of string is :%d\n", length(&str));
}