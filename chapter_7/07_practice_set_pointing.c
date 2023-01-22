#include<stdio.h>

int main(){
    int arr [10];
    // int *ptr = &arr[0];  OR
    int *ptr = arr;
    ptr = ptr+10;
    if(ptr==&arr[10]){
        printf("These point to the same location in memory\n");
    }
        else{
            printf("These do not point to the same location in memory\n");
        }
        
    


    return 0;
}