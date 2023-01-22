#include<stdio.h>
#include<math.h>

int main(){
    int side;
    printf("Enter the value of side\n");
    scanf("%d", &side);
    printf("The value of area is %0.2f", pow(side,2));

    return 0;
}
// in pow function we use the %f