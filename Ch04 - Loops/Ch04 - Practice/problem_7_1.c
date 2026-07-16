// 10. Write a program to check whether a given number is prime or not using loops. 

// prime numbers are strictly positive integers greater than 1 that have exactly two distinct divisors: 1 and the number itself.

#include<stdio.h>

int main(){
    int i;
    int n;
    int prime = 1;  // means: prime = true ( - Default)
    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++){
        if (n % i == 0) {
            prime = 0;  // means: prime = false
            break;
        }
    }

    if (n <= 1) {     // if n = 1 or n < 1, n is not prime.
        printf("%d is not a prime number", n);
    }

    else if (prime){     // (if prime = 1);
        printf("%d is a prime number", n);
    }

    else {
        printf("%d is not a prime number", n);
    }
    return 0;
}


// Alternatively (Simpler way, not including prime = 1 or prime = 0):
/*
    int i;
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++) {
        if (n % i == 0)
            break;
    }

    if (i == n)
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number", n);
*/ 

// By this method, we don't even require to add i<=1 case exclusively, it handles it altogether.

// But in this way, the condition was (i<n) inside 'for', so how 'i' even became equal to n to check (i == n)?
/*ChatGPT explaination:

Assume, n = 7 (prime example)
Let's trace the value of i.
   i= 	    Is i < 7?	   Loop body	   i++
    2 	    ✅ Yes	    Check 7 % 2	    i = 3
    3 	    ✅ Yes	    Check 7 % 3	    i = 4
    4	    ✅ Yes	    Check 7 % 4	    i = 5
    5	    ✅ Yes	    Check 7 % 5	    i = 6
    6	    ✅ Yes	    Check 7 % 6	    i = 7
    7	    ❌ No	    Loop stops	    —

After checking i = 6, the loop executes i++, making i equal to 7.
Then it checks the condition:
i < 7
which is, 
7 < 7
This is false, so the loop ends.
The condition doesn't stop i from becoming 7. It only decides whether the next iteration should begin.

When the loop exits naturally:
i == 7
Since, i == n, and the block (printf("%d is a prime number", n);) executes.
--------------------------------
Assume, n = 8 (non prime example)

   i=	    Check
    2	    8 % 2 == 0 ✅

The break; executes immediately.
The loop stops before i++ runs.
So afterward:
i == 2. not 8.

since i != n, else block (printf("%d is not a prime number", n);) executes.
*/





//-------------------------------------------------------


// Mistake: Printing "n is not a prime number" too early:
/*
#include<stdio.h>

int main(){
    int i;
    int n;
    scanf("%d", &n);

    for (i = 2; i < n; i++){
        if (n % i == 0) {
            printf("%d is not a prime number", n);
            break;
        }
        else {
            printf("%d is a prime number", n);
        }
    }


       
    return 0;
}
*/
