#include <stdio.h>

//!  1) Faça um programa em C que receba três números inteiros. Calcule e mostre a
//!  multiplicação desses números.

void main(){
    int primeiro_numero,segundo_numero, terceiro_numero,total;
    printf("digite o primeiro numero : ");
    scanf("%d",&primeiro_numero);
    printf("digite o segundo numero : ");
    scanf("%d",&segundo_numero);
    printf("digite o terceiro numero : ");
    scanf("%d",&terceiro_numero);
    total= primeiro_numero * segundo_numero * terceiro_numero;
    printf("a multiplicacao de %d * %d * %d = %d ",primeiro_numero,segundo_numero, terceiro_numero,total);
}