#include<stdio.h>

int main(){
    // prime numbers = A prime number (or a prime) is a natural number greater than that is not a product of two smaller natural numbers. 
    // desclaimer: this is not not best method to solve this problem
    int n = 5, prime=1;
    for(int i=2;i<n;i++){
     if (n%i==0){
     prime = 0;
         break;
     }
    }
    if(prime==0 && n!=2){
        printf("This is a not prime number");
    }
    else{
        printf("This is a prime number");
    }
    return 0;
}