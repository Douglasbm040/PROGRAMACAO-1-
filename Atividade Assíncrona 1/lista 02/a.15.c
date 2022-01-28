#include <stdio.h>


int main(){
    float preco;
    printf("digite o preco do produto : ");
    scanf("%f",&preco);

    if (preco<30 && preco > 0 ){
        printf("preco abaixo de 30 reias sem desconto : %.2f ",preco);
    }else if (preco >= 30 && preco <= 100 ){
        preco = preco - (preco * .1);
        printf("o valor com o desconto fica : %.2f",preco);
    }else if (preco > 100 ){
        preco = preco - (preco * .15 );
        printf("o valor com o desconto fica : %.2f",preco);
    }else {
        printf("valor invalidado ");
    }





    return 0 ;
}