// 6. Write a program to implement program 4_1 using ‘for’ loop.

#include <stdio.h>
int main() {
    int i;
    int sum = 0;
    for (i = 1; i <= 10; i++) {
    sum += i;   // sum = sum + i;
    }

printf("The sum of 10 natural numbers is: %d", sum);

    return 0;
}