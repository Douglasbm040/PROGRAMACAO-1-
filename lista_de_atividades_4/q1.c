#include <stdio.h>
//! Faça um programa em C que leia dois vetores inteiros de 20 elementos cada, depois some seus
//! elementos, gerando um terceiro vetor. Ao final, mostre o novo vetor gerado.
#define elementos 20 

int main (){
    int vetintA[elementos], vetintB[elementos], vetintC[elementos], i; 

    for (i= 0; i < elementos ; i++){
        printf("digite um numero para o vetor A elemento numero %d :",i + 1);
        scanf("%d",&vetintA[i]);
        printf("digite um numero para o vetor B elemento numero %d :",i + 1);
        scanf("%d",&vetintB[i]);
        vetintC[i]=vetintA[i] + vetintB[i];
    };

    for(i = 0 ; i < elementos ; i ++){
        printf("elemento vetor C %d => %d \n",i + 1,vetintC[i]);
    };



    return 0 ;
}