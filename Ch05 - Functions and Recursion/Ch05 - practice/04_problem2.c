// 2. Write a function to convert Celsius temperature into Fahrenheit. 

#include <stdio.h>

float c_to_f(float);

float c_to_f(float c) {
    return (c*(9.0/5)) + 32;
}

int main(){
    float c;
    printf("Enter the temperature in Degree Celsius: ");
    scanf("%f", &c);

    float f = c_to_f(c);
    printf("The temperature in Fahrenheit is: %.2f", f);
}


// NOTE: Function type (float/int/char) only affects the return value of the function.

// Mistake:
/*

#include <stdio.h>

float c_to_f(float);

float c_to_f(float c) {
    return (c*(9/5)) + 32;     <<---- Here
}

int main(){
    float c;
    printf("Enter the temperature in Degree Celsius: ");
    scanf("%f", &c);

    float f = c_to_f(c);
    printf("The temperature in Fahrenheit is: %.2f", f);
}
*/

// I assumed that because c is a float, the sub-expression 9/5 would also be treated as floating-point. It isn't.

/*
What actually happens:

Evaluate 9/5:
9 and 5 are both int
So C performs integer division
Result: 1

Now evaluate:
c * 1

Since c is float, 1 is converted to 1.0, giving:
c * 1.0

So the formula effectively became:
return c + 32;
instead of
return c * 1.8 + 32;
*/