#include <stdio.h>

int sum(int, int);  // <- function prototype (declaration)
// or: int sum(int x, int y);

int sum(int x, int y) {     // <- function definition // x and y are parameters
    printf("The sum is: %d\n",x + y);
    return x+y;
}

int main(){
    int a = 1;
    int b = 2;
    sum (1, 2); // 1 and 2 are arguements

    sum(5, 9);

    sum(10, 30);
    return 0;
}

// The return value of the function sum is going to be integer, so: int sum(...);
// The sum function takes input of two integers, so: int sum(int, int);
// This int sum(int, int); is called function prototype

// Now, we'll give parameters to the function, in another line:
// int sum(int x, int y){...} -> x and y are formal parameters.

// the code under {...} is body of the function. It tells what to do when function is called when parameters provided.

// Just before the ...} (ending of the block), we'll write the returning value. Here:
/*  {
    ...
    return x+y
    }
*/ // So when we do printf("%d", sum(1, 2)), it returns value of x+y, so the output is 3.

// sum(a, b); is called function call. It executes the function block. Here, with a and b.

// ----------

// functions help programmers to break their code into chunks so that it becomes possible to reuse them easily.

// The same above thing could have been done like this:
/*
int main(){

    int a = 1;
    int b = 2
    printf("The sum is: \n", a+b);
    
    int a1 = 5;
    int b1 = 9;
    printf("The sum is: \n", a+b);
    
    int a2 = 10;
    int b2 = 40;
    printf("The sum is: \n", a+b);

    return 0;
}
*/
// But, the number of lines has increased, and readability of the code is also somewhat decreased.

// IMPORTANT POINTS:
// Execution of C program starts from main().
// A C program can have more than one function.
// Every function gets called directly or indirectly from main().

