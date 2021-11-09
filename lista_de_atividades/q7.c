//7) Faça um programa em C que receba o peso de uma pessoa em quilos, calcule e
//   mostre esse peso em gramas.

#include<stdio.h>
float peso_em_kg, peso_em_gramas;

void interface(){
    printf("digite o peso em kilogramas ");
    scanf("%f",&peso_em_kg);
}
void conversao_kg_para_g(float peso_em_kg){
    peso_em_gramas= peso_em_kg * 1000;
    printf("o peso em gramas e : %f",peso_em_gramas);
}

void main(){
    interface();
    conversao_kg_para_g(peso_em_kg);
}