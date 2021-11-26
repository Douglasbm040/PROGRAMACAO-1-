//! 18) Faça um programa em C que receba dois números e mostre se a soma desses
//! números é par ou ímpar.
#include<stdio.h>
int primeiro_num, segundo_num, total;

void interface(){
 printf("digite o primeiro numero : ");
 scanf("%d",&primeiro_num);
 printf("digite o segundo numero : ");
 scanf("%d",&segundo_num);
}


int soma(){
  total= primeiro_num + segundo_num;
 return(total);
}

void verifica_impar_par(int total ){
 if(total%2==0){
    printf("a soma destes %d + %d resulta em no numero %d que e par ",primeiro_num,segundo_num,total );
 }else{
    printf("a soma destes %d + %d resulta em no numero %d que e impar ",primeiro_num,segundo_num,total );
 }
}




void main(){
    interface();
    soma();
    verifica_impar_par(total);
}