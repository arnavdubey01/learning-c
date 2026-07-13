// 2. Write a program to determine whether a student has passed or failed. To pass, a student requires a total of 40% and at least 33% in each subject. Assume there are three subjects and take the marks as input from the user.

#include<stdio.h>
int main(){
    printf("Only type marks out of 100\n");
    int sub1;
    printf("Enter the marks in subject 1: ");
    scanf("%d", &sub1);
    int sub2;
    printf("Enter the marks in subject 2: ");
    scanf("%d", &sub2);
    int sub3;
    printf("Enter the marks in subject 3: \n");
    scanf("%d", &sub3);

    int total = (sub1 + sub2 + sub3)/3;

    if(sub1 >= 33 && sub2 >= 33 && sub3 >= 33 && total >= 40){
        printf("You have passed!\n");
    }
    else{
        printf("You have failed, try again next time.\n");
    }

    return 0;
}


// This also works, but it adds unnecassary code:

/*
#include<stdio.h> 
int main(){ 
    printf("Only type marks out of 100\n");
    int sub1; 
    scanf("%d", &sub1); 
    printf("Enter the marks in subject 1: %d", sub1); 
    int sub2; 
    scanf("%d", &sub2); 
    printf("Enter the marks in subject 2: %d", sub2); 
    int sub3; scanf("%d", &sub3); 
    printf("Enter the marks in subject 3: %d", sub3); 

    int total = (sub1 + sub2 + sub3)/3;
    
    if(sub1 >= 33 && sub2 >= 33 && sub3 >= 33 && total >= 40){ 
        printf("You have passed!\n"); 
    } 
    else if(sub1 < 33 || sub2 <33 || sub3 < 33 || total < 40){ 
        printf("You have failed, try again next time.\n"); 
    } 
    return 0; }
*/
