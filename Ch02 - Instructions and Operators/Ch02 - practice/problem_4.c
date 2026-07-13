// 4. Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1

/*
3*x/y - z + k
3*2/3 - 3 + 1
6/3 - 3 + 1
2 - 3 + 1
-1 + 1
= 0

Solved it left to right.
'*' and '/' gets priority, left to right. Then '-' and '+', left to right.
BODMAS is not applicable in C.
*/

#include<stdio.h>

int main(){
    int x=2, y=3, z=3, k=1;

    float e = 3*x/y - z + k;
    
    printf("%f", e);    //'%f' is known as format specifier.
    return 0;
}

// Output is 0.