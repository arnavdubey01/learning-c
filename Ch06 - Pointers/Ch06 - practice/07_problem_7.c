// 7. Try problem 3 using call by value and verify that it does not change the value of the said variable.

// Problem 3: Write a program to change the value of a variable to ten times of its current value.

#include <stdio.h>

void ten_times(int);

void ten_times(int a) {
    a = a * 10;
}

int main(){
    int n = 4;
    printf("Initially, the value of 'n' is %d\n", n);
    ten_times(n);
    printf("Now, the value of 'n' is %d\n", n);

    return 0;
}

// Initially, the value of 'n' is 4
// Now, the value of 'n' is 4

// i.e. the value of n is not changed.