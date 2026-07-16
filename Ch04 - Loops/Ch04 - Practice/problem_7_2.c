// 11. Implement 7_1 using other types of loops.

#include<stdio.h>

int main(){
    int i = 2;
    int n;
    scanf("%d", &n);
    while (i < n) {
        if (n % i == 0){
            break;
        }
        i++;
    }
    
    if (i == n){
        printf("%d is prime number", n);
    }
    else {
        printf("%d is not prime number", n);
    }

    return 0;
}

// By this method, we don't even require to add i<=1 case exclusively, it handles it altogether.

