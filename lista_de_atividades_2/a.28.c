#include<stdio.h>

int main (){
    float num1,num2,resultado;
    char operador;

    printf("digite o numero : ");
    scanf("%f",&num1);
    printf("digite o numero : ");
    scanf("%f",&num2);
    printf("digite o operador;\n [+]soma\n [-]subtracao\n [*]multiplicacao\n [/]divisao\ndigite sua opcao : ");
    scanf(" %c",&operador);

    switch(operador){
    case '+':
     resultado = num1 + num2;
     printf("soma %.2f",resultado);
     break;
    case '-':
     resultado = num1 - num2;
     printf("subtracao %.2f",resultado);
     break;
    case '*':
     resultado = num1 * num2;
     printf("multiplicacao %.2f",resultado);
     break;
    case '/':
     resultado = num1 / num2;
     printf("divisao %.2f",resultado);
     break;














}













    return 0 ; 
}