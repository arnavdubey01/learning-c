// 5. Write a program to determine whether a character entered by the user is lowercase or not.


// https://www.ascii-code.com/


#include<stdio.h>

int main(){
    char c;
    printf("Enter the character: ");
    scanf("%c", &c);
    printf("The entered character is %c\n", c);
    printf("The value of the character is: %d\n", c);

    if (c >= 97 && c <= 122)
    printf("The given letter is lowecase.");
    
    else{
        printf("The given letter is not lowercase");
    }
    

    return 0;
}

// ASCII values.


// char ch = 'a';
// printf("The character is: %d", ch);
// it prints a number, that number is the ASCII value of that character
// 97 is ASCII value of lowecase a, and 122 is ASCII value of lowercase z.