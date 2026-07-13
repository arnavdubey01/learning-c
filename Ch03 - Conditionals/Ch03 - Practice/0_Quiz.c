/*
Quiz: Write a program to find grade of a student given his marks based on below: 
90 – 100 => A 
80 – 90 => B 
70 – 80 => C 
60 – 70 => D 
50 – 60 => E 
    <50 => F 
*/



#include<stdio.h>

int main(){
    int marks;
    printf("Enter marks of the student: ");
    scanf("%d", &marks);
    if(marks <= 100 && marks >= 90){
        printf("The grade is: A\n");
    }
    else if(marks < 90 && marks >= 80){
        printf("The grade is: B\n");
    }
    else if(marks < 80 && marks >= 70){
        printf("The grade is: C\n");
    }
    else if(marks < 70 && marks >= 60){
        printf("The grade is: D\n");
    }
    else if(marks < 60 && marks >= 50){
        printf("The grade is: E\n");
    }
    else if(marks < 50){
        printf("The grade is: F, You failed.\n");
    }
    else{
        printf("Invalid marks.");
    }
    return 0;
}



/*

MISTAKE:
C does not support chained comparisons like Python does.

This won't work:

#include<stdio.h>

int main(){
    int marks;
    printf("Enter marks of the student: ");
    scanf("%d", &marks);
    if(90 <= marks <= 100){
        printf("The grade is: A\n");
    }
    else if(80 <= marks < 90){
        printf("The grade is: B\n");
    }
    else if(70 <= marks < 80){
        printf("The grade is: C\n");
    }
    else if(60 <= marks < 70){
        printf("The grade is: D\n");
    }
    else if(50 <= marks < 60){
        printf("The grade is: E\n");
    }
    else if(marks < 50){
        printf("The grade is: F, You failed.\n");
    }
    else{
        printf("Invalid marks.");
    }
    return 0;
}


*/