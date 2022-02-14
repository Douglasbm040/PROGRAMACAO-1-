#include<stdio.h>
//! Faça um programa em C que leia um vetor VET com 30 elementos. Seu programa deve verificar se
//! existe um elemento igual a K no vetor. Se existir mostrar a posição em que se encontra, senão imprimir
//! “não encontrei K no vetor”.

#define VET 30

int main(){
    int vetor[VET],k,i;
    
    printf("digite o valor de busca : ");
    scanf("%d",&k);
    
    for (i=0; i < VET; i ++){
        printf("digite um valor : ");
        scanf("%d",&vetor[i]); 
    }

    for (i=0; i < VET; i ++){
        if(k == vetor[i]){
            printf("a posicao no vetor e %d \n",i);
        }
    }





    return 0;
}