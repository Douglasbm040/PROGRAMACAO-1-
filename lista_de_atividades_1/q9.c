#include <stdio.h>
//! 9) Faça um programa em C que receba os lados de um quadrado, calcule e mostre a área
//! desse quadrado. Sabendo-se que: A = lado * lado

float lado_do_quadrado, area_do_quadrado;
void interface(){
    printf("digite a medida do lado do quadrado : ");
    scanf("%f",&lado_do_quadrado);
}
void calculo_area_do_quadrado(float lado_do_quadrado){
  area_do_quadrado=lado_do_quadrado*lado_do_quadrado;
  printf("a area do quadrado e : %f",area_do_quadrado);
}
void main(){
 interface();
 calculo_area_do_quadrado(lado_do_quadrado);
}