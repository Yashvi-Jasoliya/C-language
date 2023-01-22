#include<stdio.h>
#include<stdlib.h>

int main(){
      FILE *ptr;
     char c;
     ptr = fopen("11_pr_1.txt", "r");
     //c = fgetc(ptr);
     while(c!=EOF){
         printf("%c", c);
         c = fgetc(ptr);
     }
    
    return 0;
}