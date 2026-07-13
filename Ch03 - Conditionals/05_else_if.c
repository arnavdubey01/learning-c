#include<stdio.h>

int main(){
    int age = 60;

    if(age >= 60){
        printf("You can drive and you are a senior cetizen\n");
    }
    else if(age >= 40){
        printf("You can drive, you are an elder.\n");
    }
    else if(age>=18){
        printf("You can drive\n");
    }
    else{
        printf("You can not drive!");
    }
    return 0;
}

// the last else (line 15 - 17) is optional. (The program will still run if this 'else' line wasn't there.)
// The last else only executes if all condtions above it fail.