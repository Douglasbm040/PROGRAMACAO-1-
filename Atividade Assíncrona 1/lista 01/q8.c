//! 8) Faça um programa em C que receba os lados de um trapézio, calcule e mostre a área
//!   desse trapézio. Sabendo-se que: A = ((base maior + base menor) * altura )/2

# include<stdio.h>

float area_do_trapezio, base_menor_do_trapezio,base_maior_do_trapezio, altura_do_trapezio;

void interface(){
    printf("digite a medida do lado menor do trapezio : ");
    scanf("%f",&base_menor_do_trapezio);
    printf("digite a medida do lado maior do trapezio : ");
    scanf("%f",&base_maior_do_trapezio);
    printf("digite a medida da altura do trapezio : ");
    scanf("%f",&altura_do_trapezio);
}

void calcular_area_do_trapezio(float base_menor_do_trapezio ,float base_maior_do_trapezio){
  area_do_trapezio=((base_maior_do_trapezio+base_menor_do_trapezio)*altura_do_trapezio)/2;
  printf("a area do trapezio e : %f", area_do_trapezio);
}

void main(){
    interface();
    calcular_area_do_trapezio(base_menor_do_trapezio,base_maior_do_trapezio);

}