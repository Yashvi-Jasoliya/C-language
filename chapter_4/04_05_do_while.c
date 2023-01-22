#include<stdio.h>

int main(){
    int i = 0;      // ---> this loop which executes at least once.
    do              //  this loop first execute and after check condition.
     {
        printf("The value of i is %d\n", i);
        i++;
  }while(i<10);
    return 0;
}