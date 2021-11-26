#include<stdio.h>
//! 3) Faça um programa em C que receba duas notas, calcule e mostre a média ponderada
//! dessas notas. Considerando peso 2 para a primeira nota e peso 3 para a segunda nota.

void main(){
 float nota_um, nota_dois, media ;
 printf("digite  a nota da primeira prova : ");
 scanf("%f",&nota_um);
 printf("digite a nota da segunda prova : ");
 scanf("%f",&nota_dois);
 media= (nota_um*2+nota_dois*3)/5;
 printf("a media pondera e : %.2f",media);

}