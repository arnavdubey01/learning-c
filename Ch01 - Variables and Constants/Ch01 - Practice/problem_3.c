// 3. Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit). 

#include<stdio.h>

int main(){
    float c;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    printf("Given temperature in Fahrenheit is: %.2f", (c*(9.0/5))+32);
    return 0;
}

/*
I did this:
int main(){
    int c;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    printf("Given temperature in Fahrenheit is: %d", (c*(9/5))+32);
    return 0;
}

See how i declare c an integer, but then, i also do scanf("%f", &c), basially, calling c a floating point. So this was a mistake. 

Another mistake, I did printf("...%d", (c*(9/5))+32); 
But this is not how it will work. %d espects integer, but since 'c' is float,
and 9/5 is '1.8', but %d will make the program see it as '1'.
So %f was correct.
And also I had to do (9.0/5) instead of 9/5. Why? 
** See Chapter 2 - 02_type_conversion.c **



ChatGPT explains:

why exactly 9.0/5 and not just 9/5

This is a fundamental concept in C, and understanding it will save you from many bugs.

The key idea is: The type of the operands determines how an operation is performed.

C does not look at where the result will be stored. It decides how to perform 9/5 before it knows anything about the rest of the expression.


Case 1: 9 / 5
Both operands are integers.

9     // int
5     // int

So C performs integer division.
9 / 5 = 1
The fractional part (.8) is discarded.
Now suppose you write:
float x = 9 / 5;
What happens?
9 / 5 is evaluated first.
9 / 5 → 1
The result (1) is then converted to a float.
1 → 1.0
So
float x = 9 / 5;
gives
x = 1.0
The damage was already done. The .8 was lost during integer division.

Case 2: 9.0 / 5
Now one operand is floating point.

9.0   // double
5     // int

Before dividing, C applies its arithmetic conversion rules.
The int is converted to a double:
9.0 / 5.0
Now it performs floating-point division:
9.0 / 5.0 = 1.8
No information is lost.
Why is only one .0 enough?
Because if either operand is floating point, C converts the other one.
These are all equivalent:

9.0 / 5
9 / 5.0
9.0 / 5.0
All produce 1.8 in your program


Lesson:
Whenever you need a decimal result from division, make at least one operand a floating-point value.
10 / 4      // 2
10.0 / 4    // 2.5
10 / 4.0    // 2.5
10.0 / 4.0  // 2.5

*/