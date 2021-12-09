#include<stdio.h>
//! Faça um programa em C que receba dois números inteiros positivos, sendo o primeiro o dividendo e o
//! segundo o divisor de uma divisão. O seu programa deve calcular essa divisão, apresentando ao final o
//! quociente e o resto da divisão, para isso o seu programa deve usar somente a operação de subtração,
//! ou seja, seu programa NÃO PODE usar as operações “/” e “%”.

int main(){
    int i = 1 , dividendo , divisor, resto , resultado=0,total ;

    printf("digite o dividendo : ");
    scanf(" %d",&dividendo);
    printf("digite o divisor: ");
    scanf(" %d",&divisor);
    resto = dividendo - divisor ;

    for (resto;(resto == 0  || resto >= divisor); resto = resto - divisor){
        resultado++;
        if(resto >= 0){
            total = resto ;
        }
       
    }
    printf("o resultado da divisao e : %d || o resto da divisao e : %d \n",resultado,total);
    





    return 0;
}