#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("11_pr_2.txt", "w");
    int m[100];
    printf("\033[4;31m");    // colour code for RED
    printf("----> ENTER THE MERIT MARKS <----\n\n");
    for(int i=0; i<100; i++)
    {
        printf("Enter the merit marks of student %d\n",i+1);
        scanf("%d",&m[i]);

    }
    fwrite(m, sizeof(int), 100, ptr);
    printf("\033[0;33m");     // color code for YELLOW
    printf("----> THE MERIT MARKS OF THE STUDENT DISPLAY AS FOLLOW: <----\n");
    
    ptr = fopen("11_pr_2.txt", "r");
    fread(m, sizeof(int), 100, ptr);
    for(int i=0; i<100; i++)
    {
        printf("Merit marks of student %d is: %d\n", i+1, m[i]);
    }

    return 0;
}