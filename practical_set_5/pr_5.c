#include<stdio.h>

int main(){
    int n, remainder ,rev_num =0;
    printf("Enter the numbers :\n");
    scanf("%d", &n);

    while(n != 0){
    remainder = n%10;
    rev_num = rev_num*10 + remainder;
    n = n/10;
    }
    printf("Reverse of given numbers is : %d\n",rev_num);

    return 0;
}