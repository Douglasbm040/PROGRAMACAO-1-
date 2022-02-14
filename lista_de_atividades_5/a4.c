#include<stdio.h>
//! Dada uma matriz A de dimensões 5x4 formada de elementos numéricos reais. Faça um programa em C
//! que calcule e mostre sua matriz transposta T.

int main(){
    float matriz[5][4],matriz_transposta[4][5] ;
    int i,j ;

    //! iniciando a matriz
    for(i = 0 ; i < 5 ; i++){
        for(j=0; j < 3 ; i ++){
            printf("digite um valor : ");
            scanf("%f",&matriz[i][j]);
        }
    }

    for(i = 0 ; i < 5 ; i++){
        for(j = 0; j < 3 ; i ++){

            matriz_transposta[j][i] = matriz[i][j] ;
            printf("%f",matriz_transposta[j][i]);
        }
    }

 




    return 0 ;
}