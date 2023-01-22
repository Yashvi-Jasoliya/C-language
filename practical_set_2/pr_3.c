#include<stdio.h>

int main(){
    int months, days;
   
    printf("Enter the days : \n");
    scanf("%d", &days);
    
    months = days/30;
    days = days % 30;
  
    printf("Months, days = %d, %d\n", months, days);
    return 0;
}