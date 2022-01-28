//! Faça um programa em C que leia a quantidade n de números inteiros que serão informados e o seu
//! programa deverá ao final apresentar o maior e o menor dentre os n números. Lembrando que os
//! números poderão ser negativos.
#include<stdio.h>

int main(){    
    int num, i, opcao, maior  ;


    printf("digite um numero: ");
    scanf(" %d",&num);
    maior = num ;

    while(i>0){
    
       printf("digite um numero: ");
       scanf(" %d",&num);
       printf("deseja continuar ? (1-sim ou 0-nao): ");
       scanf(" %d",&opcao);

       if (num > maior ){
           maior = num ;
       }

       i = opcao ;
    }
    printf("o maior valor %d",maior);

}