#include<stdio.h>

int main(){
    char i,j;
     char ch='A';
    for(i=1; i<=5;i++)
  {
    for(j=1; j<=6-i;j++){
    printf(" %C",'A'-1+i);
    ch++;
    }
    ch='A';

    printf("\n");
   }
    return 0;
}