//! 17) Faça um programa em C que receba a medida de dois ângulos de um triângulo,
//! calcule e mostre a medida do terceiro ângulo. Sabe-se que a soma dos ângulos de um
//! triângulo é 180.

#include <stdio.h>
float medida_do_angulo1, medida_do_angulo2,medida_do_angulo3;
void interface(){
 printf("digite a medida do primeiro angulo : ");
 scanf("%f",&medida_do_angulo1);
 printf("digite a medida do segundo angulo : ");
 scanf("%f",&medida_do_angulo2);
}
void calcula_medida_de_terceiro_angulo(){
  medida_do_angulo3= 180-(medida_do_angulo1 + medida_do_angulo2);
  printf("a medida do terceiro angulo e : %.2f graus",medida_do_angulo3);
}
void main(){
    interface();
    calcula_medida_de_terceiro_angulo();

}