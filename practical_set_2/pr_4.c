#include<stdio.h>

int main(){

    float centigrade, fahrenheit;
    
    printf("Enter the value of fahrenheit : \n");
    scanf("%f", &fahrenheit);
    
    centigrade = (fahrenheit-32)*5/9;
    printf("Centigrade temp is = %0.2f", centigrade);
 
 return 0;
}