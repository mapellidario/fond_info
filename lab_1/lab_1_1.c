// gcc -o lab10 lab_1_0.c

#include <stdio.h>
#include <stdlib.h>

int main (){

    int b = 3;
    int e = 5;
    int i = 0;
    int result = 1;
    printf("%d\n", result);
    for (i=1; i<=e; i++){
        result = result * b;
        printf("%d alla %d = %d\n",b, i, result);
    }

    exit(EXIT_FAILURE);
}