// 2. Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height. 

#include<stdio.h>

int main(){
    int radius;
    printf("Enter the radius: ");
    scanf("%d", &radius);
    printf("Area of circle of radius %d is: %.2f\n", radius, (3.14)*radius*radius);

    int height;
    printf("Enter height of cylinder: ");
    scanf("%d", &height);
    printf("The volume of cylinder of height %d and radius %d is: %.2f\n", height, radius, (3.14)*radius*radius*height);
    return 0;
}

/*
This program is more self explanatory, still:
I first took input from user for radius of circle as integer (Line 6, 7 and 8)

Used the formula pi*r square to find area of circle. (pi = 3.14), had to use %f instead of %d as 3.14 is floating point, we want the area of circle as floating point too. Also used .2 (%.2f) to only get area of circle upto two decimal places (line 9)

Then I took input from user for height of cylinder (Line 11, 12 and 13)

Used the formula pi*r^2*h to find volume of the cylinder (pi = 3.14), had to use %f instead of %d as 3.14 is floating point, we want the volume of cylinder as floating point too. Also used .2 (%.2f) to only get volume of cylinder upto two decimal places (line 14)
*/ 


// Main points:

// Area of circle: pi*r*r
// Volume of cylinder: Area of circle * height of cylinder

// %.2f prints two digit after decimal in float.
// .2 -> two digits after decibal, f -> float (because of pi = 3.14)