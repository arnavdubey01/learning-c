#include<stdio.h>

int sum(int *, int *);

int sum(int *a, int *b) {
    *a = 4;
    return *a + *b;
}


int main(){
    int x = 1, y = 6;
    printf("The sum is %d\n", sum(&x, &y));
    printf("The value of x is %d\n", x);
    return 0;
}

//  The value of x changed to 4.

// Here, unlike in 04_call_by_value.c, we didn't pass values of x and y, i.e. 1 and 6. We passed the addresses of x and y (&x and &y).
// The function parameters 'a' and 'b' receive copies of these addresses.
// Therefore, 'a' points to x and 'b' points to y.

/*
Pointers allow a function to modify the original variables in the calling function.

Normally, C uses pass by value, so only copies of variables are passed.
However, here we pass the addresses of x and y:

    sum(&x, &y);

The parameters 'a' and 'b' are local pointer variables that store the
addresses of x and y.

    a --> x
    b --> y

When we write:

    *a = 4;

the '*' (dereference operator) accesses the value stored at the address
contained in 'a'. Since 'a' points to x, this statement is equivalent to:

    x = 4;

Therefore, the original variable x in main() is changed from 1 to 4.

Note: C still passes arguments by value. The values being copied are the
addresses (&x and &y), not the integers themselves.
*/