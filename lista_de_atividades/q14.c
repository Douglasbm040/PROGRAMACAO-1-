/* 14) João recebeu seu salário e precisa pagar duas contas que estão atrasadas. Como as
contas estão atrasadas, João terá que pagar multa de 2% sobre cada conta. Faça um
programa em C que calcule e mostre quanto restará do salário do João.
*/

#include<stdio.h>

float salario, conta_1, conta_2, total;

void interface(){
    printf("digite seu salario : ");
    scanf("%f",&salario);
    printf("digite a conta 1 : ");
    scanf("%f",&conta_1);
    printf("digite a conta 2 : ");
    scanf("%f",&conta_2);
}

void calcula_saldo(float salario, float conta_1,float conta_2){

}
void main(){
    interface();
    calcula_saldo(salario,conta_1,conta_2);
}

