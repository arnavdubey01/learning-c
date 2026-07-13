/*
Arithmetic operation between two integers will always give integer.
int and int -> int

Arithmetic operation between two floating points will always give floating point.
float and float -> float

Arithmetic operation between an integer and a floating point will always give a floating point.
int and float -> float


Important point to remember (example):
5/2 becomes 2 as both the operands are int 
5.0/2  becomes 2.5 as one of the operands is float 
2/5 becomes 0  as both the operands are int 
*/


#include <stdio.h>
int main(){
    int a = 9;
    int b = 2;
    float c = 9/2;
    printf("The value of 9/2 (int/int) is %f\n", c);

    float d = 9.0;
    float e = 2;
    printf("The value of 9.0/2 or 9/2.0 or 9.0/2.0  (float/int or float/float) is: %.2f\n", d/e);
    

// We can use %.2f instead of %f (Used in line 33), the .2 in this is used get output for upto two decimal places. .1 for one decimal place, and so on..
// using '\n' as a habit...


/*
NOTE:
In programming, type compatibility is crucial. For int a = 3.5;, the float 3.5 is demoted to 3, losing the fractional part because a is an integer. 
Conversely, for float a = 8;, the integer 8 is promoted to 8.0, matching the float type of a and retaining precision.
*/

    int f = 2.54; 
//This gets converted to integer, the fractional part is removed,so f=2.

    float g = 3;
//This gets converted to float, so g = 3.00000

    printf("%d\n", f); 

    printf("%f\n", g);
    
    printf("%.2f\n", g);

    return 0;
}