#include<stdio.h>
void printTable(int *multiTable,int num, int n){

  printf("The multiplicationn table of %d is :\n",num);
for(int i=0; i<n; i++){
      multiTable[i] = num*(i+1);
    }
    
     for(int i=0; i<n; i++){
         printf("%dX%d = %d\n", num, i+1, multiTable[i]);
     }
     printf("********************************\n\n");
}

int main(){
    int multiTable[3][10];
    printTable(multiTable[0], 2, 10);
    printTable(multiTable[1], 7, 10);
    printTable(multiTable[2], 9, 10);
    //for(int i=0; i<10; i++){
      //multiTable[0][i] = 2*(i+1);
    //}
    
     //for(int i=0; i<10; i++){
       //  printf("2X%d = %d\n", i+1, multiTable[0][i]);
     //}

     //for(int i=0; i<10; i++){
      //multiTable[0][i] = 7*(i+1);
    //}
    
     //for(int i=0; i<10; i++){
       //  printf("7X%d = %d\n", i+1, multiTable[0][i]);
     //}

     //for(int i=0; i<10; i++){
      //multiTable[0][i] = 9*(i+1);
    //}
    
     //for(int i=0; i<10; i++){
       //  printf("9X%d = %d\n", i+1, multiTable[0][i]);
     //}
    
    return 0;
}