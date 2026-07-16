#include<stdio.h>
int main(){
    int i = 0;
    while(i < 10){
        printf("The value of i is %d\n", i);
        i++;
    }
    return 0;
}

// i++ is increment operator, it simply means i = i+1 (increase value of i by 1)
// (more on increment and decrement operators later in '05_increment_decrement.c')

// The loop terminates as soon as the value of i becomes 10.

// What if we don't write 'i++' or 'i = i + 1'?
// In that case, value of i never becomes 10, and always remains 0, 
// Since the condition i<10 is always true, it turns into an infinite loop.
// Next sub-topic (04_while_infinite.c)