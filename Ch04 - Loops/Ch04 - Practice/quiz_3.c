// // Quick Quiz: Write a program to print first ‘n’ natural numbers using for loop

// // syntax:
// // for (initialize; test; increment or decrement){...}

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        printf("%d\n", i);
    }
    return 0;
}

