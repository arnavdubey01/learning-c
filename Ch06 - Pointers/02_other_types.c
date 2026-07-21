#include <stdio.h>

int main() {
    char i = 'A';
    char* j = &i;
    printf("The address of i is %p\n", j);
    
    float a = 2.353;
    float* b = &a;
    printf("The address of a is %p\n", b);
    return 0;
}

// it's a good practice to use meaningful variable names.
// we should be careful while reading and working on programs from fellow programmers.