#include<stdio.h>

int main(){
    if(1){
        printf("This 'if(1)' is executed\n");
    }
    if(2374){
        printf("This 'if(2374)' is also executed\n");
    }
    if(2.54){
        printf("This 'if(2.54)' is also executed\n");
    }
    if('c'){
        printf("This 'if('c')' is also executed\n");
    }
    if(0){
        printf("This is f(0), it ins't executed");
    }
    return 0;
}

// So, C treats '0' as false, and any other non-zero value as true
// Unlike python, C doesn't have literal 'True' and 'False' booleans, 
// though <stdbool.h> exists for this.. (later)