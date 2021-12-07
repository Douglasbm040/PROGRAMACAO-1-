#include <stdio.h>

int main (){
    
    float peso,resultado,altura; ;

    printf("digite a altura : ");
    scanf("%f",&altura);
    printf("digite o peso : ");
    scanf("%f",&peso);
    
    resultado =  peso / (altura * altura );

    if (resultado < 20 ){
        printf("Voce esta abaixo do peso ideal.");

    }else if (resultado >= 20 && resultado < 25){
        printf("Parabens! voce esta em seu peso normal!");

    }else if (resultado >= 25 && resultado < 30 ){
        printf("Voce esta acima de seu peso (sobrepeso).");

    }else if (resultado >= 30 && resultado < 35 ){
        printf("Obesidade moderada (grau I).");

    }else if (resultado >= 35 && resultado < 40){
        printf("Obesidade severa (grau II).");
    }else if (resultado >= 40) {
        printf("Obesidade morbida (grau III).");
    }





    return 0 ;
}