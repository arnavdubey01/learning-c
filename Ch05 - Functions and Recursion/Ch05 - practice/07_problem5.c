// 5. What will the following line produce in a C program: 
// int a = 4; 
// printf("%d %d %d \n", a, ++a, a++);

/*
Theoretical question..
(spoiler: undefined behavior)

a is initialized with 4.
++a means to increment a by 1, then print,
a++ means to print, then increment a by 1,
so the output will be:
//  4 5 5   (spoiler: This is not incorrect, but not completely correct either!)

*/
#include <stdio.h>

int main(){
    int a = 4; 
    printf("%d %d %d \n", a, ++a, a++);
}

/*
The output turns out to be: 
// 6 6 4
But why?

Since the C standard does not specify the evaluation order of function arguments,
the compiler was free to evaluate them in any order. 

Possibly, this compiler evaluated 6 6 4 because:
a, ++a, a++

a++, so 4 printed, and value of a became 5
++a, so value of a became 6, and 6 printed.
a, so the value of a printed, i.e 6.

Therefore, printf effectively becomes:
printf("%d %d %d\n", 6, 6, 4);
*/

// This expression has undefined behavior according to the C standard.
// Therefore, there is no single correct output. Different compilers, compiler versions, or optimization levels may produce different results.


/*
Explanation:

C language does not specify the order in which these arguments are evaluated.
More importantly:
++a modifies a
a++ also modifies a
a reads its value
There are multiple modifications of the same variable (a) without sequencing between them, which the C standard says is undefined behavior.
What does "undefined behavior" mean?
It does not mean:
"the compiler chooses left-to-right"
"the compiler chooses right-to-left"
It means:
The C standard places no requirements on what happens.
The compiler is free to do literally anything.
For example, different compilers or optimization levels might print
4 5 5
or
6 6 4
or
5 6 4
or
4 6 5
or even crash (though that's unlikely here).

All of these are valid because the program itself has undefined behavior.
*/


/*
Lesson:

Never modify the same variable more than once in a single expression.

Instead of writing:

    printf("%d %d %d\n", a, ++a, a++);

write:

    printf("%d\n", a);
    printf("%d\n", ++a);
    printf("%d\n", a++);

This avoids undefined behavior and makes the program's behavior well-defined.
*/