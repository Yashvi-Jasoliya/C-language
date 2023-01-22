#include<stdio.h>

int main(){
    int multi[10];
    for(int i=0; i<10; i++){
      multi[i] = 5*(i+1);
      
    }
 
    for(int i=0; i<10; i++){
     printf("5X%d = %d\n", i+1, multi[i]);
        
    } 
  
    
    return 0;
}