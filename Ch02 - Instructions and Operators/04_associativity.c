// Simple BODMAS rule doesn't apply in C.
/*
priority: ('*', '/', '%') > ('+', '-') > ('=')
*/
/*
OPERATOR ASSOCIATIVITY:
When operators of equal priority are present in an expression, the tie is taken care of by associativity. 
x*y/z → (x*y)/z 
x/y*z → (x/y)*z 

'*', '/' follows left to right associativity.
// Pro Tip: Always use parenthesis in case of confusion
*/

#include<stdio.h>

int main(){
    int a = 3;
    int b = 5;
    int c = 2;

    printf("The value of a*b/c + 7 is %d\n", a*b/c + 7);
    // a*b/c + 7
    // 3*5/2 + 7
    // 15/2 + 7
    // 7.5 + 7
    // 14.5 = 14 (Becaue integer, %d; not float, %f)

    printf("The value of 4*a/2*c + 7*b is %d\n", 4*a/2*c + 7*b);
    // 4*a/2*c + 7*b
    // 4*3/2*2 + 7*5
    // 12/2*2 + 35
    // 6*2 + 35
    // 12 + 35 = 47
    return 0;
}