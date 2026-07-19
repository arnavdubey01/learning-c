#include <stdio.h>

int change(int a);

int change(int a) {     // Misnomer  
    a = 77;         
    return 0; 
} 

int main(){

    int b=22; 
    change(b);  // The value of b remains 22                 

    printf("b is %d", b);   // Prints "b is 22" 


    return 0;
}


// We expect value of b to change from 22 to 77, but this is not how arguments are passed in C language, so this doesn't happen.

/*
In main(), we create variable 'b'. (int b = 22),
Then, we call the function: change(b);
The function does not have direct access to b,
instead, it copies the value of b in parameter a. 

now, b = 22. and a = 22.

Inside 'change()', a = 77 executes, a is changed locally, b is unchanged:
b = 22, a = 77
At the end of change(), We have written 'return 0;', so the local variable 'a' is destroyed. Only b remains. 
(When change() finishes executing, the local variable 'a' goes out of scope, and is destroyed. The control returns to main().)

Since b = 22, when we do printf("b is %d", b); it prints 'b is 22' 
*/



// The function is named 'change', which suggests it changes the caller's variable.
// But it actually changes only its own copy of the value.
// So the name is misleading (a misnomer).


// Key concept: Pass by value 
/*
In C language, change(b); means: copy the value stored in b into parameter a.
It does not mean: let a be another name for b
That is why modifying a does not affect b.
*/

// To actually change variable 'b', we have to pass its address (pointers), more on this later.


// Program would still work without function prototype, only if function definition is written above main(). Anyways, It is always a good idea to write function prototype.