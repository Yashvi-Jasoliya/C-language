#include<stdio.h>
 
int main(){
    int i = 5;
    printf("The value after i++ is %d\n", i++);    // understand diff b/w i++ and ++i output
     //  i++; // ---> pehle print phir increament
    //   ++i; // ---> pehle increament phir print kare
    printf("The value of i is %d\n", i);

    i+=10; //---> Increament i by 10      ---> Using this we can do addition
    printf("The value of i is %d\n", i);    
    return 0;
}