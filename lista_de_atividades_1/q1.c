#include<stdio.h>
#include<stdlib.h>

//1) Faça um programa em C que receba três números inteiros. Calcule e mostre a
//  multiplicação desses números.
int primeiro_numero, segundo_numero, terceiro_numero, total;
void interface(){
   printf("digite o primeiro numero : ");
   scanf("%d",&primeiro_numero);
   printf("digite o segundo numero : ");
   scanf("%d",&segundo_numero);
   printf("digite o terceiro numero : ");
   scanf("%d",&terceiro_numero);

}
void multiplicacao_das_tres_parcelas(int  primeiro_numero, int segundo_numero, int terceiro_numero){
   total= primeiro_numero *  segundo_numero * terceiro_numero;
   printf("o resultado e : %d", total);
}
 
void main(){
   interface();
   multiplicacao_das_tres_parcelas(primeiro_numero,segundo_numero,terceiro_numero);
   
   
   
}