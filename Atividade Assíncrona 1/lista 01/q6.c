//! 6) Faça um programa em C que receba o peso de uma pessoa, calcule e mostre:
//!   a) o novo peso se a pessoa engordar 15% sobre o peso digitado;
//!   b) o novo peso se a pessoa emagrecer 20% sobre o peso digitado;
#include<stdio.h>


float peso, peso_emagrece, peso_engorda ;
int opcao_escolhida;
void interface(){
  printf("digite o peso : ");
  scanf("%f",&peso);
  printf("para sabe o peso de engorda digite[1] para saber se peso de emagrecer digite[2] : ");
  scanf("%d",&opcao_escolhida);
  
}

void calcula_peso_engorda (float peso){
 peso_engorda = peso + (peso*0.15);
 printf("o peso de engorda e : %f",peso_engorda);
}

void calcula_peso_emagrece(float peso){
    peso_emagrece=peso-(peso*0.2);
    printf("o peso de emagrecimento e : %f",peso_emagrece);
}

void gerenciar_calculos(){
  interface();
  if (opcao_escolhida==1){
      calcula_peso_engorda(peso);
  }
  else if(opcao_escolhida==2){
      calcula_peso_emagrece(peso);

  }else{
      printf("comando nao entendido ");
      gerenciar_calculos(opcao_escolhida);
  }

}


void main(){

 gerenciar_calculos();
 
}