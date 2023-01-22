#include<stdio.h>

int main(){
    //char str[] ="Yashvi";
    char str[] = { 'Y', 'a', 's', 'h', 'v', 'i', '\0'};
    char *ptr = str;
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;

    }
    return 0;
}