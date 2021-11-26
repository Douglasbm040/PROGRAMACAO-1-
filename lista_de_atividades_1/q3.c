#include<stdio.h>
//3) Faça um programa em C que receba duas notas, calcule e mostre a média ponderada
//dessas notas. Considerando peso 2 para a primeira nota e peso 3 para a segunda nota.
float nota_um, nota_dois, total;
void interface(){
 printf("digite a primeira nota : ");
 scanf("%f",&nota_um);
 printf("digite a segunda nota : ");
 scanf("%f",&nota_dois);
}

void media(float nota_um, float nota_dois){

 total = (nota_um * 2 + nota_dois*3) / 5;
 printf("a media do aluno e : %f", total);

}

void main(){
 interface();
 media(nota_um,nota_dois);
}