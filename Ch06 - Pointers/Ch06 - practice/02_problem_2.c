// 2. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address. Are these addresses same? Why?
#include <stdio.h>

int return_5(int *ptr) {
    printf("The value of ptr is %d\n", ptr);
    printf("The value at ptr is %d\n", *ptr);
    return 5;
}

int main() {
    int i = 4;
    int *ptr = &i;
    printf("The address of i is %u\n", &i);
    return_5(ptr);
    return 0;
}

// int *ptr doesn't mean "the value pointed to by ptr." here, it means, "ptr is a pointer to an int."
// Here it just tells that "this variable is a pointer" (Used in declaration)

// When used in expression, then it is "dereference the pointer".