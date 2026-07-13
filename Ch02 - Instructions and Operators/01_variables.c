// Variable is simply the name of memory location.

#include<stdio.h>

int main(){
    int i = 10; // Declare and initialize 'i' with 10
    int j = i;  // Declare 'j' and initialize with 'i' 
    int a = 2, b = 3, c = 4, d = 5;  // Declare and initialize multiple variables

    int k = a + j - 2*i;    // Valid

    // Assigning same value to multiple variables:
    int p, q, r, s;
    p = q = r = s = 20;

    // %d is called format specifier.
    // %d for int, %f for float, %c for char

    // float b = a + 3  // Invalid, b was already declared as integer.
    // float a = 2.3    // Invalid, a was already declared as integer.

    printf("The value of i is %d and value of j is %d\n", i, j);
    printf("The value of a is %d and value of b is %d\n", a, b);
    printf("The value of c is %d and value of d is %d\n", c, d);
    return 0;
}

// Basically, don't initialize same variable twice.