#include<stdio.h>

int main(){                                 // diffrence :
    char *ptr = "Yashvi Jasoliya";         //print also othe string  
     //char ptr[] = "Yashvi Jasoliya";    //not print other string
     ptr = "abc xyz";
    printf("%s", ptr);

    return 0;
}