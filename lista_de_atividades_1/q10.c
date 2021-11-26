//! 10) Faça um programa em C que receba os lados de um losango, calcule e mostre a área
//! desse losango. Sabendo-se que: A = (diagonal maior * diagonal menor) /2
#include <stdio.h>
float area_do_losango, diagonal_maior, diagonal_menor;
void interface(){
    printf("digite a medida da diagonal maior : ");
    scanf("%f",&diagonal_maior);
    printf("digite a medida da diagonal menor : ");
    scanf("%f",&diagonal_menor);

}
void calcular_area_do_losango(float diagonal_maior, float diagonal_menor){
 area_do_losango= (diagonal_maior*diagonal_menor)/2;
 printf("a area do losango e : %f",area_do_losango);
}
void main(){
interface();
calcular_area_do_losango(diagonal_maior,diagonal_menor);
}