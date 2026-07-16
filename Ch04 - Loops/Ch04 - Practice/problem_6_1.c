// 8. Write a program to calculate the factorial of a given number using a for loop.


#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int product = 1;
    for (int i = 1; i <= n; i++) {
        product *= i;   // [product = product * i]
    }
printf("The factorial of %d is: %d", n, product);
    return 0;
}


/*
for n = 5:

| Iteration |  i | product before | product after |
| --------- | -: | -------------: | ------------: |
| Start     |  - |              1 |             1 |
| 1         |  1 |              1 |             1 |
| 2         |  2 |              1 |             2 |
| 3         |  3 |              2 |             6 |
| 4         |  4 |              6 |            24 |
| 5         |  5 |             24 |           120 |

*/