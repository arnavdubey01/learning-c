// 5. Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().

#include <stdio.h>

int *sum(int, int);
float *average(int, int);

int *sum(int x, int y) {
    int s = x + y;
    int *ptr = &s;
    printf("The sum is %d\n", s);
    return ptr;
}

float *average(int x, int y) {
    float avg = (x + y)/2.0;
    float *ptr = &avg;
    printf("The average is %.2f\n", avg);
    return ptr;
}

int main() {
    int a, b;
    // printf("Enter first number: ");
    // scanf("%d", &a);
    // printf("Enter second number: ");
    // scanf("%d", &b);
    a = 3;
    b = 5;

    int *ptr1;
    float *ptr2;
    ptr1 = sum(a, b);
    ptr2 = average(a, b);

    printf("The address of sum is %u, and adderss of average is %u", ptr1, ptr2);
    return 0;
}