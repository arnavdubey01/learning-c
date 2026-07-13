// 1. Write a C program to calculate area of a rectangle: 
// a. Using hard coded inputs. 
// b. Using inputs supplied by the user. 

// (a):

#include<stdio.h>

int main(){
    int l = 5;
    int b = 10;
    printf("Area of a rectangle of length %d and breadth %d is: %d\n", l, b, l*b);
    return 0;
}


// Wrong Syntax for printf:
// #include<stdio.h>

// int main(){
//     int l = 5;
//     int b = 10;
//     printf("Area of a rectangle of length %d",l,"and breadth %d",b, "is: %d", (l*b));
//     return 0;
// }

