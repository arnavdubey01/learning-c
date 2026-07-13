// 1. What will be the output of this program 
/*
int a = 10; 
if (a = 11) 
printf("I am 11"); 
else  
printf("I am not 11"); 
*/


// I first thought that curly brackets are absent, so it might through an error,
// But then I realised:
// Curly brackets are optional when the if or else contains only one statement.

// #include<stdio.h>
// int main(){
//     int a = 10; 
//     if (a = 11) 
//     printf("I am 11"); 
//     else  
//     printf("I am not 11"); 
//     return 0;
// }

/*
it doesn't give any error, but it prints wrong. It prints "I am 11", but the given number was 10, so the output should have been "I am not 11". Why??

OH! 
=  -> assignment operator
== -> comparison operator

here, if (a = 11) is used, so a is assigned as 11, so it prints "I am 11"
it should have been if (a == 11); then it would have worked
*/

// Another thing, Curly brackets are optional when the if or else contains only one statement.

// So the correct program:

#include<stdio.h>
int main(){

    int a = 10; 
    if (a == 11) 
    printf("I am 11"); 
    else  
    printf("I am not 11"); 
    return 0;
}

// this works.