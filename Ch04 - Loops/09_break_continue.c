#include<stdio.h>

int main(){
    for (int i = 0; i < 15; i++){    /// i<n -> prints from i = 0 to i = (n - 1)   
        if (i==5){
            // break; // exit the loop now! loop is immediately terminated.
            continue; // skip this iteration now! The particular iteration is skipped.
        }
        printf("value of i is %d\n", i);
    }
    printf("For loop is terminated!");
    return 0;
}

// The break; statement is used to exit the loop irrespective of whether condition is true or false.

// The continue; statement is used to immediately move to the next iteration of the loop, skipping that current iteration.

// Sometimes, the name of the variable might not indicate the behavior of the program.
// Meaning, if you name a variable: 'always_0', that doesn't mean the variable will always be 0. This seems like common sense, but it's a silly mistake which can happen. 