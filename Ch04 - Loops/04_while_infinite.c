/*
#include<stdio.h>
int main(){
    int i = 0;
    while(i < 10){
        printf("The value of i is %d\n", i);
    }
    return 0;
}

// since there is no increment in value of i, it always remains equal to 0, the condition is always true, so the loop continues infinitely.
// To stop the loop, do ctrl + c on windows (Keyboard interrupt)

*/ //or:

#include<stdio.h>
int main(){
    int i = 0;
    while(2 < 10){
        printf("The value of i is %d\n", i);
        i++;
    }
    return 0;
}

// To stop the loop, do ctrl + c on windows (Keyboard interrupt)

// Since 2 < 10 is always true, the loop never terminates. the value of i keeps increasing by 1 to infinity.