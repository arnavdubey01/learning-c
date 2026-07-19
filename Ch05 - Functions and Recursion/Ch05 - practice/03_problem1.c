// 1. Write a program using function to find average of three numbers. 

#include <stdio.h>

float avg(float, float, float);

float avg(float a, float b, float c) {
    return (a+b+c)/3;
}

int main() {
    float a, b, c;
    printf("Enter first number: "); 
    scanf("%f", &a);
    printf("Enter second number: "); 
    scanf("%f", &b);
    printf("Enter third number: "); 
    scanf("%f", &c);

    float average = avg(a, b, c);
    printf("Average is %.2f", average);
    return 0;
}