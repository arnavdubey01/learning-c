// 6. Write a recursive function to calculate the sum of first ‘n’ natural numbers.

#include <stdio.h>

// f(n) = 1 + 2 + 3 + ... + (n-1) + n
// f(n) = f(n-1) + n 
// and f(0) = 0 <- base condition

int sum(int);

int sum(int n) {
    if (n <= 0) {
        return 0;
    }
    return sum(n-1) + n;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Sum of first %d natural numbers = %d", n, sum(n));
    return 0;
}

