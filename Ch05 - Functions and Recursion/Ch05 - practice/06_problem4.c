// 4. Write a program using recursion to calculate nth element of Fibonacci series. 

#include <stdio.h>

// 0, 1, 1, 2, 3, 5, 8...
// 0+1=1, 1+1=2, 1+2=3, 2+3=5, 3+5=8....

// f(n) = f(n-1) + f(n-2)


int fibonacci(int);

int fibonacci(int n) {
    // if (n == 1){
    //     return 0;
    // }
    // if (n == 2){
    //     return 1;
    // }

    if (n == 1 || n == 2) {
        return n-1;
    }
    
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int f = fibonacci(n);
    printf("The element at position %d in fibonacci series in %d", n, f);
    return 0;
}