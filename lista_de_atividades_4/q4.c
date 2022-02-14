#include <stdio.h>
//! Faça um programa em C que leia e mostre um vetor de 20 elementos inteiros. A seguir, conte quantos
//! valores pares existem no vetor.
#define elementos 20


int main (){
    int vector[20] , i , contador = 0;

    for (i =0 ; i < elementos ; i ++){
        printf("digite o valor do elemento : ");
        scanf("%d",&vector[i]);
    }

    for (i = 0 ; i < elementos ;i ++){
        if ( vector[i] % 2 == 0  ){
            contador = contador + 1 ;
        }
    }
    printf("o numero de valores pares no vetor e : %d ",contador);





    return 0 ;
}