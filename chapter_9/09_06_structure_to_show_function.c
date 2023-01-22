#include<stdio.h>
#include<string.h>
 struct employee{
    int code;
    float sallary;
    char name[20];
};

void show(struct employee emp){
    printf("The code of employee is :%d\n", emp.code);
    printf("The sallary of employee is :%f\n", emp.sallary);
    printf("The name of employee is :%s\n", emp.name);
}
int main(){
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
   // (*ptr).code = 101;  or you can also write:  ptr->code = 101;
   ptr->code = 101;
   ptr->sallary = 11.01;
   strcpy(ptr->name,"Yashvi");

   show(e1);
    return 0;
}