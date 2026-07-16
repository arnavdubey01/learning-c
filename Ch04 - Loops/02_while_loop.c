/*
Syntax:
    while (condition) { 
        // Code..
        // This block of code keeps executing as long as the condition is satisfied.
    }
This is how while loops work! 
*/

#include<stdio.h>

int main(){
    int i = 0;
    while(i < 4){
       printf("Happy Birthday!!\n");
       i = i + 1;
    }
    return 0;
}

/*
Initially, value of i is 0,
it checks whether i is less than 4 (while(i<4);),
since 0 is less than 4, it runs the command and prints "Happy Birthday!!"

Since I also did i = i + 1,
the block executes again, this time, value of i is 1 (0 + 1)
1 is less than 4, so it prints "Happy birthday!!" again.

This continues...

After value of i becomes 4, it check whether i<4
Since 4 is not less than 4, the condition is now false, the loop terminates, the block is no longer executed.
*/


// NOTE: i = i + 1 can be written as 'i++', 
// this is called the incrementing operator (more on this later).

// If we forget to increment 'i', the condition 'i < 4' will always remain true,
// resulting in an infinite loop.