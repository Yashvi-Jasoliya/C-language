#include<stdio.h>
// sum is a function which takes a and b as input and returns an integer as an output
int sum(int a, int b);  //function prototype declaration

int main(){
    int result;
    result = sum(2, 5); // function call     //2 nd 5 arguments
    printf("The value of result is %d\n", result);
    return 0;
}

int sum (int a, int b){
    int c;
    c = a + b;   // a and b are parametrs
    return c;

}