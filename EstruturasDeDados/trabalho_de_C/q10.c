#include<stdio.h>

void main(){
    float peso , altura , imc;

    printf("digite a altura :");
    scanf("%f",&altura);
    printf("digite o peso :");
    scanf("%f",&peso);

    imc = peso /(altura * altura) ;

    printf("%f",imc);







}