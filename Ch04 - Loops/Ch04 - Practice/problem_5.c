// 7. Write a program to calculate the sum of the numbers occurring in the 
// multiplication table of 8. (consider 8 x 1 to 8 x 10). 

#include<stdio.h>

int main(){
    int i;
    int table;
    int sum;
    for (i = 1; i <= 10; i++) {
        table = 8*i;
        sum += table;
    }
    printf("%d", sum);
    return 0;
}