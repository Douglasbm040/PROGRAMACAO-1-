#include <stdio.h>


int main(){
    float salario,novo_salario ;
    printf("digite o seu salario : ");
    scanf("%f",&salario);
    
    if(salario > 0  && salario < 300 ){
        novo_salario = salario + ( salario * .5 );
        printf("1 o salario inicial e %.2f novo salario %.2f",salario,novo_salario);
    } 
    else if(salario > 300 && salario <= 500){
        novo_salario = salario + ( salario * .4 );
        printf("2 o salario inicial e %.2f novo salario %.2f",salario,novo_salario);
    }
    else if(salario > 500 && salario <= 700){
        novo_salario = salario + ( salario * .3 );
        printf("3 o salario inicial e %.2f novo salario %.2f",salario,novo_salario);
    }
    else if(salario > 700 && salario <= 800){
        novo_salario = salario + ( salario * .2 );
        printf("4 o salario inicial e %.2f novo salario %.2f",salario,novo_salario);
    }
    else if(salario > 800 && salario <= 1000){
        novo_salario = salario + ( salario * .1 );
        printf("5 o salario inicial e %.2f novo salario %.2f",salario,novo_salario);
    
    }else if ( salario > 1000) {
        novo_salario = salario + ( salario * .05 );
        printf("6 o salario inicial e %.2f novo salario %.2f",salario,novo_salario);
    }else {
        printf("valor invalido ");
    }

    return 0 ;
}