#include <stdio.h>

int factorial(int);

int factorial(int n) {
    if(n == 1 || n == 0){   // This is called base condition.
        return 1;
    }
    
    // n! = n * (n-1)!
    return factorial(n-1)*n;
}

int main(){
    int a = 4;
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}

// Recursive function: It calls itself.

// Base condition ensures that program doesn't stack up. 


/*
IMPORTANT NOTES: 

1. Recursion is often a direct way to implement certain algorithms, but not always the most direct for every algorithm. Recursion is particularly suited for problems that can be divided into smaller, similar sub-problems (like factorial computation or tree traversal), but for some algorithms, iterative approaches might be more straightforward or efficient. 

2. The condition in a recursive function that stops further recursion is called the base case. This correction clarifies that the base case is crucial as it prevents infinite recursion and ensures the function terminates correctly. 

3. Sometimes, due to an oversight by the programmer, a recursive function can continue to run indefinitely without reaching a base case, potentially causing a stack overflow or memory error. This statement highlights the risk of infinite recursion and its consequences, emphasizing the importance of properly defining base cases in recursive functions. 
*/