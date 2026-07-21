#include<stdio.h>

int sum(int, int);

int sum(int a, int b) {
    a = 4;
    return a + b;
}


int main(){
    int x = 1, y = 6;
    printf("The sum is %d\n", sum(x, y));
    printf("The value of x is %d\n", x);
    return 0;
}

// We know from Ch05\03_change.c, that only the copy of variable goes to the function.
// The function receives copies of x and y in the parameters a and b.

// sum function cannot change value of x using 'a' becausee only the copy of x is provided to sum in 'a'.


// Initially, a = 1 and b = 6.
// x is copied into a, y is copied into b, a is changed to 4 (a is local variable. The value of x is still 1, the value of local variable 'a' is 4.)

// Inside the function, a is changed to 4.
// This changes only the local copy, not x in main().
// the function returns a + b
// So it is a + b that becomes 4 + 6, not x + y.
// Therefore, the function returns 4 + 6 = 10, while x in main() remains 1.

// Function parameters are local variables.
// They receive copies of the arguments (pass by value), so modifying a parameter changes only the local copy, not the original variable in the calling function


// So, can value of x never be changed?
//  - No. See 05_call_by_reference.c