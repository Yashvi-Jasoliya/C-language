#include<stdio.h>

int main(){
    char s[34];
    printf("Enter your name: ");
    scanf("%s", s);          // not use &s only use s //can we use &s so we use also \0 like &s\0
    printf("Your name is %s", s); 
    return 0;
}