#include<stdio.h>
int main(){

    float num1,num2,num3, average;

    printf("Enter three number :");
    scanf("%f %f %f", &num1 , &num2 , &num3);

    average=( num1 + num2 + num3) / 3;
    printf("average is %f",average);

        return 0;

}