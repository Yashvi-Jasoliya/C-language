#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float sallary;
    char name[10];
};
int main(){ 
    struct employee e1, e2, e3;
    printf("Enter the value for code of e1:");
    scanf("%d", &e1.code);
    printf("Enter the value for sallary of e1:");
    scanf("%f", &e1.sallary);
    printf("Enter the value for name of e1:");
    scanf("%s", e1.name);

    printf("Enter the value for code of e2:");
    scanf("%d", &e2.code);
    printf("Enter the value for sallary of e2:");
    scanf("%f", &e2.sallary);
    printf("Enter the value for name of e2:");
    scanf("%s", e2.name);

    printf("Enter the value for code of e3:");
    scanf("%d", &e3.code);
    printf("Enter the value for sallary of e3:");
    scanf("%f", &e3.sallary);
    printf("Enter the value for name of e3:");
    scanf("%s", e3.name);

   
    
    return 0;
}