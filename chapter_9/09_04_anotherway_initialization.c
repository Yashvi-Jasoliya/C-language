#include<stdio.h>


    struct employee{
    int code;
    float sallary;
    char name[20];
};
int main(){
    struct employee harry = {100,34.23,"Harry"};
    printf("code is : %d \n",harry.code);
    printf("sallary is : %f \n",harry.sallary);
    printf("Name is : %s \n",harry.name);
    return 0;
}