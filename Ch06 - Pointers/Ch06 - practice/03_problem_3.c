// 3. Write a program to change the value of a variable to ten times of its current value.

#include <stdio.h>

void ten_times(int *);

void ten_times(int *a) {
    *a = *a * 10;
}

int main(){
    int n = 4;
    printf("Initially, the value of 'n' is %d\n", n);
    ten_times(&n);
    printf("Now, the value of 'n' is %d\n", n);

    return 0;
}