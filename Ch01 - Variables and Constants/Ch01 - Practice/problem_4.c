// 4. Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest.

#include <stdio.h>
int main(){
    float principal, years, interest_rate;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the number of years: ");
    scanf("%f", &years);
    printf("Enter the rate of interest(%%): ");
    scanf("%f", &interest_rate);

    float interest = principal*years*interest_rate/100;

    printf("After %.0f years, with interest rate of %.2f%%, simple interest for the given principal amount %.2f will be: %.2f/-", years, interest_rate, principal, interest);

    return 0;
}

/*
Simple Interest= P×R×T/100
P = principal
R = rate of interest
T = time (years)
*/