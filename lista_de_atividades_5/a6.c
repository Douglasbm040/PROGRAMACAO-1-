#include<stdio.h>
//! Dada uma matriz B formada por números inteiros com 5 linhas e 3 colunas, Faça um programa em C
//! que imprima na tela apenas os números que ocupem uma posição onde a linha mais coluna é par.




int main(){
    int matB[5][3],i,j;

    for(i = 0 ; i < 5 ; i ++){
        for(i = 0 ; i < 3 ; i ++ ){
            printf("digite um valor : ");
            scanf("%d",&matB[i][j]);
        }
    }

    //! imprima na tela apenas os números que ocupem uma posição onde a linha mais coluna é par.

    return 0 ;
}