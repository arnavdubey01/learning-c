// 7. Write a program using function to print the following pattern (first n lines) 
// * 
// *** 
// *****

#include <stdio.h>

// number of stars = 2n + 1

int main() {
    int n = 3;
    for (int i = 0; i < 3; i++){    // This code runs from 0 to 2.
        for (int j = 0; j < (2*i+1); j++) { // This for loop prints (2*i+1) lines.
            printf("*");
        }
        printf("\n");   // This prints a new line.
    }
    return 0;
}








/*
char pattern(int);

char pattern(int n) {
    if (n == 0) {
        return '*';
    }
    return pattern(n-1)*'*';
}

int main() {
    int n = 3;
    printf("%c", pattern(n));
    return 0;
}
*/


