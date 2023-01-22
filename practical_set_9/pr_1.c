#include<stdio.h>
#include<string.h>
void reverse(char *str)
{
    printf("After the reversing string is: %s",strrev(str));
}
int main(){
    char str[30];
    printf("Enter the string: \n");
    scanf("%s", str);
    reverse(str);
    return 0;
}