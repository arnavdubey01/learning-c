#include<stdio.h>

int main(){
    int i = 0;
    do{
      printf("The value of i is %d\n", i);
        i++;
    } while (i < 4);

    return 0;
}

// How is do-while loop different from while loop?

// 'while' checks the condition and then executes the code. 
// 'do-while' executes the code and then checks the condition.




// NOTE: if there is a mistake in the program, you might get Garbage value in output, for example, if you write printf("The value of i is %d\n"); instead of printf("The value of i is %d\n", i); you will get garbage values in output.
// these values have nothing to do with the code.