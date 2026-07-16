// 9. Repeat problem_6_1 using while loop


#include<stdio.h>

int main(){
    int i = 1;
    int n;
    int product = 1;
    scanf("%d", &n);

    while (i <= n) {
        product *= i;    // [product = product * i]
        i++;
    }
printf("The factorial of %d is: %d", n, product);
    return 0;
}
