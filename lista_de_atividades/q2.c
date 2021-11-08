#include<stdio.h>
#include<stdlib.h>

//2) Faça um programa em C que receba 2 números, calcule e mostre a divisão do
//   primeiro número pelo segundo. Sabe-se que não é permitido o número zero.
int primeiro_numero, segundo_numero, total ;
  
int intercao(){
 printf("digite o primeiro numero : ");
 scanf("%d",primeiro_numero);
 printf("digite o segundo numero : ");
 scanf("%d",segundo_numero);
 total= primeiro_numero/segundo_numero;
 return total;

}


void main(){

 intercao() ;

  
  






}