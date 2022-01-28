#include <stdio.h>
 

int main (){
    float salario ;

    printf("digite o seu salario : ");
    scanf("%f", &salario);

    if(salario <= 300 && salario > 0 ){
        salario =  salario + (salario * 0.35 );
        printf("o salario ajustado e : %.2f ",salario);

    } else {
        salario =  salario + ( salario * 0.15);
        printf("o salario ajustado e : %.2f", salario ); 
    } 

    return 0 ;
}