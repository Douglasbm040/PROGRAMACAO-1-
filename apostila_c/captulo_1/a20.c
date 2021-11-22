#include <stdio.h>


int main(){
    float reais , dolar ;
    printf("digite o valor em reais : ");
    scanf("%f",&reais);
    printf("digite o valor de conversao : ");
    scanf("%f",&dolar); 

    reais  = reais * dolar ;

    printf("o valor e R$ %.4f ", reais );


    return 0 ;
}