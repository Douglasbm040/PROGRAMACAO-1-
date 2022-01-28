//16) Sabe-se que para iluminar de maneira correta os cômodos de uma casa, para cada m 2
// deve-se usar 18 W de potência. Faça um programa em C que receba as duas
// dimensões de um cômodo (em metros), 
// calcule e mostre a sua área (em m2) e a potência de iluminação que deverá ser utilizada.
#include<stdio.h>

float comprimento_do_comodo, largura_do_comodo, potencia_em_w, area;

void interface(){
    printf("digite o comprimento em metros do comodo : ");
    scanf("%f",&comprimento_do_comodo);
    printf("digite a largura em metros do comodo : ");
    scanf("%f",&largura_do_comodo);
}
void calcula_potencia_iluminacao(){
    area=largura_do_comodo*comprimento_do_comodo;
    potencia_em_w = area *18;
   printf("a potencia necessaria em w e de : %.2f para a area de %.2f m 2", potencia_em_w,area);
}
void main(){
  interface();
  calcula_potencia_iluminacao();

}