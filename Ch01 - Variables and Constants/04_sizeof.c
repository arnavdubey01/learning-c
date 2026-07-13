#include <stdio.h>

int main()
{
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of float: %zu bytes\n", sizeof(float));
    return 0;
}

// Output:
// Size of int: 4 bytes
// Size of char: 1 bytes
// Size of float: 4 bytes

// These are stored in RAM.