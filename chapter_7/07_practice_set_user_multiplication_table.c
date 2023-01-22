#include<stdio.h>

int main(){
    int n=22 ;
    int multi[10];
    for(int i=0; i<10; i++){
       
        printf("Enter n is\n");
        scanf("%d", &multi[i]);
        multi[i] = n*(i+1);
    }
 
    for(int i=0; i<10; i++){
     printf("nX%d = %d\n", i+1, multi[i]);
        
    } 
 
    return 0;
}