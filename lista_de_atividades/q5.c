//!5) Um funcionário recebe um salário fixo mais 4% de comissão sobre as valor_das_vendas. Faça
//!   um programa em C que receba o salário fixo do funcionário e o valor de suas valor_das_vendas,
//!   calcule e mostre a comissão e o salário final do funcionário.
#include <stdio.h>

float salario_fixo, salario_final;
int valor_das_vendas;

void interface(){
 printf("digite o salario do funcionario : ");
 scanf("%f",&salario_fixo);
 printf("digite o valor das valor das vendas : ");
 scanf("%d",&valor_das_vendas);
}

void calculo_do_salario_final(float salario_fixo, int valor_das_vendas){
  salario_final = salario_fixo + valor_das_vendas * 0.04; 
  printf("o salario final e : %f", salario_final);
}


void main(){
 interface();
 calculo_do_salario_final(salario_fixo,valor_das_vendas);
}