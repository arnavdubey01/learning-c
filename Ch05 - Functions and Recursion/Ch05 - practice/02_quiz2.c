// Quick Quiz: Use the library function to calculate the area of a square with side a.

// There is library in C, we'll use it:


#include <stdio.h>
#include <math.h>

int main() {
    int a = 5;
    printf("The area of this square is %.2f\n", pow(a, 2));
    return 0;
}

// Used the 'pow' function of this math.h library. (a, 2) is a^2