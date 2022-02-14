//! Faça um programa em C que leia um vetor de 80 elementos inteiros. Encontre e mostre o menor
//! elemento e sua posição no vetor.

#include <stdio.h>
#define elementos 80 

int main(){
    int vetor[elementos], i , menor = vetor[0] , posicao  ;

    for (i = 0 ; i < elementos ; i ++ ){
        printf("digite o valor : ");
        scanf("%d",&vetor[i]);



    }
    
    
    
    for (i = 0 ; i < elementos ; i++ ){
        if (menor < vetor[i]){
            menor = vetor[i];
            posicao = i ;
        }
    }

    printf("o menor valor e %d na posicao %d",menor,posicao);



    return 0 ;
}