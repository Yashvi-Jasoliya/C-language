#include<stdio.h>
void SumAndAvg(int a, int b, int *sum, float *avg){
  *sum = a + b;
  *avg = (float)(*sum)/2;
}
int main(){
    int i, j, Sum; 
    float avg;
    i = 3;
    j = 6;
    SumAndAvg(i, j, &Sum, &avg);
    printf("The value of sum is %d\n", Sum);
    printf("The value of avg is %f\n", avg);
    return 0;
}