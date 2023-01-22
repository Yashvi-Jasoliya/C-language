#include<stdio.h>
float fehrenheit(float celsius);
int main(){
  
    float celsius;
    printf("Enter the tempreture in celsius\n");
    scanf("%f",&celsius);
    printf("the temp in fehrenheit=%f",fehrenheit(celsius));
    
    return 0;
}
float fehrenheit(float celsius){
    float fehrenheit;
    fehrenheit =celsius*9/5+32;
    return fehrenheit;
}