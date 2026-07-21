#include<stdio.h>

int main(){
    int i = 6;
    int* j = &i;
    int** k = &j;   // <- k is integer pointer to integer pointer j.

    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *(&i));
    printf("The value of i is %d\n", **(&j));
    return 0;
}


/*
Line 10:
&i means address of i
*j means go to the memory address stored in j and get the value living there,

Since address of i is stored in j,
*j = *(&i) means go to address of i and get value of i.

// Now, obviously there will be value of i at the address of i.
So, *(&i) = 6, it looks like *(&i) = i.
*/
// Similar logic as above for Line 11.


// This * thing is called dereferencing (reading the value stored at an address).


// & gives the address of a variable.
// * dereferences (reads the value stored at an address).
//
// Therefore:
// *(&a)  == a
//
// If a is itself a pointer:
// **(&a) == *a

// NOTE that **(&j) works, but **(&i) would be a compilation error since i is not a pointer.