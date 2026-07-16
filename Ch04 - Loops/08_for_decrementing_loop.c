#include<stdio.h>

int main(){
    int i;
    for (i = 5; i; i--){
        printf("%d\n", i);
    }
    return 0;
}

// We learned that every value in C language which is non zero, is true (Ch03 -> 03_non_zero.c), and 0 is false.

// Here the condition itself is i
// The loop terminates the value of i becomes 0 (i--).

// code executes with i = 5 -> i decrement -> code executes with i = 4 -> i decrement -> code executes with i = 3 -> ... -> i decrement -> loop terminates, as i is now 0.


/*
It can also be written as:

int main(){
    int n;
    for (int i = n; i; i--){
        printf("%d\n", i);
    }
    return 0;
*/