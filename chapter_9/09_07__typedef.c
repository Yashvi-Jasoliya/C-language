#include<stdio.h>
#include<string.h>
 typedef struct employee{
    int code;
    float sallary;
    char name[20];
}emp;

    void show(emp emp1){
    printf("The code of employee is :%d\n", emp1.code);
    printf("The sallary of employee is :%f\n", emp1.sallary);
    printf("The name of employee is :%s\n", emp1.name);
}

int main(){
    // Declaring ptr and e1
    struct employee e1;
    struct employee *ptr;
    // pointing ptr to e1
    ptr = &e1;

    // Set the member values for e1
   ptr->code = 101;
   ptr->sallary = 11.01;
   strcpy(ptr->name,"Yashvi");
    show(e1);
  
    return 0;
}