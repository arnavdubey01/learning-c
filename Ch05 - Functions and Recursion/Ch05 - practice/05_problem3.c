// 3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s^2.


// F = m*g 
// F = m*(9.8)

#include <stdio.h>

float force(float);

float force(float m) {
    return m*9.8; 
}

int main() {
    float m;
    printf("Enter the mass of body in kg: ");
    scanf("%f", &m);

    float f = force(m);
    printf("The force of attraction exerted bt earth on the body is: %.2f N", f);
    return 0;
}


