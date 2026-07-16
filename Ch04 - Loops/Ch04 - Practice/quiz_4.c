// Quick Quiz: Write a program to print ‘n’ natural numbers in reverse order. 

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = n; i; i--){
        printf("%d\n", i);

    }
    return 0;
}