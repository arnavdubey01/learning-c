#include <stdio.h>

int main() {
    int i = 72;
    printf("The address of i is %p\n", &i);    // Prints address of i in hexadecimals


    int* j = &i;    // j is an integer pointer pointing to i
    printf("The address of i is %p\n", j);

    printf("The value at address j is %d\n", *j);   // *j <-> *(&i)

    printf("The address of j is %p\n", &j);

    return 0;
}

// when we declare any variable, like int i, it gets a place in the system RAM in a particular address, pointers store that address.

// By textbook definition: A pointer is a variable which stores the address of another variable.

// j is an integer pointer pointing to i :: j is storing the address of i.
// j will also have it's own address.


// %u in place of %p prints address of i in integers, though %p is the default and usual for printing address.