#include<stdio.h>
//! Faça um programa em C que calcule e imprima a soma dos elementos situados abaixo da diagonal
//! principal da matriz A (dimensões 10x10), incluindo os elementos da própria diagonal.
int main(){
    int mat[10][10] , i , j , soma=0;

    //? preencher a matrix
    for(i=0 ; i<10 ; i++){

        for(j = 0 ; j < 10 ; j ++){
            printf("digite um valor");
            scanf("%d",&mat[i][j]);
        }
    }

    for(i=0 ; i <10 ; i ++){
        for(i=0; i < 10 ; i ++){
            if(i == j){
                soma = soma + mat[i][j];
            }
        }
    }

    printf("%d",soma);

    return 0 ;
}