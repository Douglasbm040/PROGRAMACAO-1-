//! 12) Faça um programa em C que calcule e mostre a tabuada de um número digitado
//! pelo usuário.
#include<stdio.h>
int num, total ;

void interface(){
 printf("digite o numero para realizar a tabuada : ");
 scanf("%d",&num);
}
void realiza_a_tabuada(int num){
    printf("vou entrar no for ");
    for (int parcela = 1 ; parcela >=10 ; parcela++){
        total= num * parcela;
        printf("o reusltado e : %d",&total);
    }
    printf("passei do for");
}
void main(){
    interface();
    realiza_a_tabuada(num);
}