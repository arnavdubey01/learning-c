// 2. What data type will 3.0/8 – 2 return? 
#include <stdio.h>

int main(){
    int a = 3.0/8 - 2;
    float b = 3.0/8 - 2;
    printf("int: %d, float: %f", a, b);

    return 0;
}

// 3.0/8 is evaluated first (priority). then 2 is subtracted from it.