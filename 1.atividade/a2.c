#include <stdio.h>
//! 2) Faça um programa em C que receba 2 números, calcule e mostre a divisão do
//!    primeiro número pelo segundo. Sabe-se que não é permitido o número zero.

void main(){
   float primeiro_numero, segundo_numero, resultado;
   printf("digite o primeiro numero : ");
   scanf("%f",&primeiro_numero);
   printf("digite o segundo numero  : ");
   scanf("%f",&segundo_numero);
   resultado=primeiro_numero/segundo_numero;
   printf("o resultado de %f divido por %f = %.3f ", primeiro_numero,segundo_numero,resultado);
}