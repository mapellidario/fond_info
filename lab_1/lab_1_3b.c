// gcc -o lab13 lab_1_3.c
#include <stdio.h>

// dichiarazione funzione sigma
int sigma(int n);

int main () 
{
    int n1=1;
    int n2=1;
    int n1_max=10000;
    int n2_max=10000;
    for (n1=1; n1<=n1_max; n1++)
    {
        for (n2=1; n2<n1; n2++)
        {
            // printf("%d:%d; %d: %d\n",n1, sigma(n1), n2, sigma(n2));
            if (n1 == sigma(n2) && n2 == sigma(n1)) {
                printf("%d %d (%d %d)\n", n1, n2, sigma(n1), sigma(n2));
            }
        }
    }
    return 0;
}

// definizione funzione sigma
int sigma(int n) 
{
    int sigma=0;
    int i=1;
    for (i=1; i<n; i++){
        if (n%i == 0){
            sigma = sigma + i;
        }
    }
    return sigma;
}