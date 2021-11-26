//!15) Faça um programa em C que receba o raio, calcule e mostre:
//!  a) o comprimento da esfera, sabe-se que C = 2πR;
//!  b) a área dessa esfera, sabe-se que A = πR
//!  2
//!  c) o volume dessa esfera, sabe-se que V = 4πR3
//!  /3

#include<stdio.h>
float raio,total;
float pi = 3.14;
int opcao;
void interface(){
 printf("digite o raio da esfera : ");
 scanf("%f",&raio);
 printf("escolha as funcoes : \n[1]comprimento da esfera \n[2]area dessa esfera \n[3]volume dessa esfera \nselecione o numero correspondente a funcao : ");
 scanf("%d",&opcao);
}

void calculo_esfera(){
  interface();
  switch(opcao){
      case 1:
      total = 2 * pi * raio;
      printf("o comprimento da esfera e : %f",total);
      break;
      case 2:
      total = pi * raio *raio;
      printf("a area desta esfera e : %f",total);
      break;
      case 3:
      total = 4 * pi * raio* raio * raio / 3; 
      printf("o volume desta esfera e : %f",total);
      break;
      default:
      printf("comando invalido por favor repita os dados : ");
      calculo_esfera();
  }

}

void main(){
 calculo_esfera();
}