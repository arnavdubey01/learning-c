// 4. Write a function and pass the value by reference.

#include<stdio.h>

void pass_by_ref(int *);

void pass_by_ref(int *a){
    int n;
    printf("Enter the value to pass: ");
    scanf("%d", &n);

    *a = n;
}

int main(){
    int x;
    printf("Enter the initial value of variable 'x': ");
    scanf("%d", &x);
    printf("The value of 'x' is: %d\n", x);

    pass_by_ref(&x);
    printf("Now the value of variable 'x' is: %d\n", x);
    return 0;
}