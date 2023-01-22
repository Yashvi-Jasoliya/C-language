#include<stdio.h>
#include<string.h>

 struct employee{
    int code;
    float sallary;
    char name[20];
};
int main(){
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[0].sallary = 100.45;
    strcpy(facebook[0].name, "Harry");

     facebook[1].code = 101;
    facebook[1].sallary = 90.45;
    strcpy(facebook[1].name, "Rohan");

     facebook[2].code = 102;
    facebook[2].sallary = 110.45;
    strcpy(facebook[2].name, "Skillkhiladi");
    printf("Done");

    
   
    return 0;
}