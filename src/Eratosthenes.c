/*  Implementação do Algoritmo de Eratóstenes em C para cálculo de números primos.
*   Written by Caio Cesar, Janeiro 2023   
*   v0.1a
*/  


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    long nprimos[1000];
    long testersInt[1000];
    long int i, j, k ,l;
    i = 0;
    j = 1;
    k = 0;
    while(j < 500){
        testersInt[k] = i;
        k++;
        i++;
        j++;
        printf("j = %ld\n", j);
        printf("i = %ld\n", i);

    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("%ld\n", testersInt[0]);
    printf("%ld\n", testersInt[1]);
    printf("%ld\n", testersInt[2]);
    printf("%ld\n", testersInt[3]);
    printf("%ld\n", testersInt[4]);
    printf("%ld\n", testersInt[100]);
    printf("%ld\n", testersInt[150]);




    getchar();
    return 0;
}