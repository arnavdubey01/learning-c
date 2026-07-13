#include <stdio.h>

int main(){
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    printf("The value of a is %d", a);
    return 0;
}

// We use scanf function to take input from user.
// snanf("%d", &i);
// '&' is the "address of" operator and it means that the supplied value should be copied to the address which is indicated by variable 'i'