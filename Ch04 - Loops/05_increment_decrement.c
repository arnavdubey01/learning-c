#include <stdio.h>
int main(){
    int i = 5;
    printf("The value of i is %d\n", i); // prints 5

    printf("The value of i is %d\n", ++i); // prints 6
    
    printf("The value of i is %d\n", i++); // prints 6 again
    printf("The value of i is %d\n", i); // prints 7

    i += 2; // same as i = i + 2
    printf("The value of i is %d\n", i); // now it prints 9
    return 0;
}

// 'i++' and '++i' are different.

// i++ uses the current value of i first and then increase i by 1 (Post increment operator)
// ++i increases i by 1 first, then prints i (Pre increment operator)

// Similarly, decrement operators exist:
// i-- and --i

// NOTE: There is no '+++' operator in C. 

// '+=' operator is used when increasing value of 'i' by more than 1. like, i += 2 increases the value of i by 2 (i = i + 2).

// -=, *=, /=, %= are also valid operator

// <<=, >>=, &=, |=, ^= are compound bitwise assignment operators.

