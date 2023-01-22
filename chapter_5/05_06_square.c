#include<stdio.h>
int square(int a);

int main(){
    int a;
    printf("enter a:");
    scanf("%d", &a);
    printf("The area of the square is %d",square(a));

   
  return 0;
}
  int square(int a){
    
    return a*a;  

  }


