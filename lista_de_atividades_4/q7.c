#include<stdio.h>
//! Faça um programa em C que leia um conjunto A com 50 números reais e construa um conjunto B, onde
//! os elementos de ordem (posição) par são os elementos correspondentes de A divididos por 2, e os de
//! ordem (posição) ímpar correspondem aos elementos de A multiplicados por 3. Ao final, mostre os dois
//! conjuntos de números.
#define VEC 50

int main(){
    float vetorA[VEC],vetorB[VEC];
    int i ;

    for( i = 0 ; i < VEC ; i ++ ){
        printf("digite o valor : ");
        scanf("%f",&vetorA[i]);
    }

    for(i = 0 ; i < VEC ; i ++ ){
        if( i % 2 == 0 ){
            vetorB[i]=vetorA[i] / 2 ;
        }else{
            vetorB[i]=vetorA[i] * 3 ;
        }

    }
     for(i = 0 ; i < VEC ; i ++ ){
         printf("vetor A = %.2f vetor B = %.2f",vetorA[i],vetorB[i]);
     
     
     
     
     }


















    return 0 ;
}