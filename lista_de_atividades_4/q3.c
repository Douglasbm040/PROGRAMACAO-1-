#include<stdio.h>
//! Faça um programa em C para ler um conjunto de 10 inteiros e escrevê-los na ordem inversa à ordem de
//! leitura.
#define vec 10

int main(){
    int vector[vec],i;


    for(i= vec - 1; i >= 0  ; i--){
        printf("elemento %d digite o valor : ",i);
        scanf("%d",&vector[i]);
    }



    return 0 ;
}