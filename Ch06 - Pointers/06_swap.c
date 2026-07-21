#include<stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 4, b = 6;
    swap(&a, &b);
    printf("The value of a is %d and value of b is %d", a, b);
    return 0;
}

/*
C passes function arguments by value, meaning the function receives copies of the variables. 
Modifying those copies does not change the original variables.

To modify the original variables, we pass their addresses using the '&' operator. 
(As we saw in 05_call_by_reference.c)

Function call:
    swap(&a, &b);

Suppose:
    a = 4
    b = 6

Memory (example addresses):
    Address    Variable    Value
    1000       a           4
    1004       b           6

The function receives these addresses:
    a -> 1000
    b -> 1004

Here, 'a' and 'b' are POINTERS, not normal integers.

The '*' (dereference) operator means:
    "Go to the memory address stored in this pointer."

Execution:

1. temp = *a;
   - *a means go to address 1000.
   - Value found = 4.
   - temp becomes 4.

2. *a = *b;
   - *b means go to address 1004 and read 6.
   - Store 6 at address 1000.
   - So, *a = 6
   - Original variable 'a' becomes 6.

3. *b = temp;
   - temp contains 4.
   - Store 4 at address 1004.
   - Original variable 'b' becomes 4.

Final values:
    a = 6
    b = 4
Swapped!


    pointer      -> stores an address
    &variable    -> gives the variable's address
    *pointer     -> accesses/modifies the value at that address

Because we modify the values at the original memory addresses,
the changes remain even after the function returns.
*/