#include <stdio.h>

int main(){
    int n = 45;
    float m = 23.41;

    n = (int)m; //  <- this is typecasting.
    printf("%d", n);
    return 0;
}

// By typecasting, we can change the datatype.