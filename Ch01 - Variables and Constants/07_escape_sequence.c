#include <stdio.h>

int main(){
    int a;
    char ch = 'a';
    ch = 'c';
    ch = '\n';  // represent a new line
    printf("Hey, How are you? \nnice");
    printf("\nHey, How are you? \t nice"); 
    printf("\nHey, How's it going? \"nice\"");
    printf("\nHey, YOOOO! \'single quotes\'");
    printf("\nYOYOYO! Back slash: \\");
    return 0;
}

// here \n and \t are escape sequence characters.


//  \n is used for next line
//  \t gives space like tab.
//  \" is used to add double quotes inside double quotes of (example) printf.

// same can be done for single quotes.

//   '\\' - double back slash, used to enter '\' single backslash inside double quotes. 