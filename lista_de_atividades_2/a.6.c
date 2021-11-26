#include <stdio.h>
#define aumento 0.3
#define salario_filtro 500

int main(){
    float salario;

    printf("digite o seu salario : ");
    scanf("%f",&salario);  

    if (salario < salario_filtro ){
        salario = salario + (salario * aumento);
        printf("o valor reajustado e : %.2f",salario) ;
    }else {
        printf("seu salario e maior que o salario filtro de %d",salario_filtro);
    }






    return 0 ; 
}