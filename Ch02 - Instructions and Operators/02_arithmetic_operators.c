#include<stdio.h>

int main(){
    int a = 4;
    int b = 3;
    int c = a + b;

    printf("The value of a is %d and value of b is %d and sum of a and b is %d\n", a, b, c);

    // Modulus operator is used to get the remainder.
    printf("The remainder when a is divided by b is: %d\n", a%b);
    return 0;
}

// To find remainder, we use modulus operator '%'
// (We also used '%' in python)

// + (Addition) 
// - (Subtraction) 
// * (Multiplication) 
// / (Division) 
// % (Modulus) 

// NOTE: % operator can't be applied on float

// Operator is not assumed.
// meaning, ab is invalid, a*b is valid.

// int d = a^b is not a valid operator in C.
// For exponentials, we do pow (x,y) from <math.h> (more later) 

// Simple BODMAS rule doesn't apply in C.
/*
priority: ('*', '/', '%') > ('+', '-') > ('=')
*/



