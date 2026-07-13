// 1. Write a C program to calculate area of a rectangle: 
// a. Using hard coded inputs. 
// b. Using inputs supplied by the user. 

// (b):

#include<stdio.h>

int main(){
    int l, b;
    printf("Enter length\n");
    scanf("%d", &l);

    printf("Enter breadth\n");
    scanf("%d", &b);

    printf("Area of rectangle: %d", l*b);
    return 0;
}