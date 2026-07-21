// 6. Write a program to print the value of a variable i by using “pointer to pointer” type of variable. 


#include<stdio.h>

int main(){
    int i = 5;
    int *j = &i;
    int **k = &j;

    printf("The value if variable i is %d", ***(&k));
    return 0;
}

// ***(&k) --> **k --> **(&j) --> *j --> i