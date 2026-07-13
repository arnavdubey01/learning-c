#include<stdio.h>

int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    switch(a){
        case 1:
            printf("You entered 1\n");
            break;
        case 2:
            printf("You entered 2\n");
            break;
        case 3:
            printf("You entered 3\n");
            break;
        case 4:
            printf("You entered 4\n");
            break;
        default:
            printf("Nothing matches the number you have entered");
        
    }

    return 0;
}

// Here, 'break;' is necassary, or else all the cases below the user entered case will run.