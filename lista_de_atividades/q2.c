#include<stdio.h>
#include<stdlib.h>

//2) Faça um programa em C que receba 2 números, calcule e mostre a divisão do
//   primeiro número pelo segundo. Sabe-se que não é permitido o número zero.
float primeiro_numero, segundo_numero, total ;
  
void interacao(){
 printf("digite o primeiro numero : ");
 scanf("%f",&primeiro_numero);
 printf("digite o segundo numero : ");
 scanf("%f",&segundo_numero);
 if (segundo_numero==0){
    printf("zero no divisor nao e uma divisao valida outra vez ");
    interacao();
    }
 else {
    total= primeiro_numero/segundo_numero;
    printf("o resultado e : %f", total);
    }
}

void main(){
 interacao() ;
}