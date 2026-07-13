#include<stdio.h>

int main(){
    int a=1; int b=1;
    printf("The value of a and b is: %d\n", a&&b);
    printf("The value of a or b is: %d\n", a||b);
    printf("The value of not(a) is %d\n", !a);

    
    if(a){
        if(b){
            printf("Both are true\n");
        }
    }
    // Same can be written as:
    if (a && b){
        printf("Both are true\n");
    }



    return 0;
}


/*
1 means True
0 means False
a&&b means a and b 
a||b means a or b


      Condition          |           C:           |       Output
      (a and b)          |       (a && b)         | 
    True and True        |        1 && 1          |       1 - True
    True and False       |        1 && 0          |       0 - False
    False and False      |        0 && 0          |       0 - False
                         |                        |
      (a or b)           |       (a || b)         |
    True or True         |        1 || 1          |       1 - True
    True or False        |        1 || 0          |       1 - True
    False or False       |        0 || 0          |       0 - False
*/

// '!a' means not(a), so if a = 1  ->  !a = 0
//                   and if b = 0  ->  !b = 1 