//!11) Faça um programa em C que receba o valor do salário mínimo e o valor do salário
//!    de um funcionário, calcule e mostre a quantidade de salários mínimos que ganha esse
//!    funcionário.
#include <stdio.h>

float salario_minimo, salario_do_funcionario,total;

void interface(){
    printf("digite o salario minimo atual : ");
    scanf("%f",&salario_minimo);
    printf("digite o salario do funcionario : ");
    scanf("%f",&salario_do_funcionario);
}

void quantidade_de_salarios_minimos(float salario_minimo,float salario_do_funcionario){
  total = salario_do_funcionario / salario_minimo;
  printf("a quantidade de salarios miminos e : %f",total);
}

void main(){
    interface();
    quantidade_de_salarios_minimos(salario_minimo,salario_do_funcionario);
}