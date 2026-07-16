// 6. Write a program to implement program 4_1 using ‘do-while’ loop.


#include <stdio.h>
int main() {
    int i = 1;
    int sum = 0;
    do {
        sum += i;       // means: sum = sum + i
        i++;
    } while(i <= 10);
printf("The sum of 10 natural numbers is: %d", sum);

    return 0;
}

// just cut 'while(i <= 10)' and write 'do' in its place, and paste 'while(i <= 10)' after the 'do' block.