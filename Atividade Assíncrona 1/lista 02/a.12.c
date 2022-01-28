#include <stdio.h>


int main ( ){
    float preco;
    printf("digite o preco do produto : ");
    scanf("%f",&preco);

    if (0 < preco  && preco <= 50 ){
     preco = preco + ( preco * 0.5);
     printf("o valor do produto e : %.2f ",preco);

    }else if (preco > 50 && preco <= 100){
     preco = preco + ( preco * 0.1);
     printf("o valor do produto e : %.2f ",preco);

    }else if (preco > 100){
     preco = preco + ( preco * 0.15);
     printf("o valor do produto e : %.2f ",preco);

    }else{
     printf("preco invalido ");
    }

    if (preco < 80 ){
     printf("o preco esta barato");
    }else if (preco >= 80 && preco < 120){
     printf("o preco esta normal ");

    }else if (preco >= 120 && preco < 200 ){
     printf("o preco esta caro");
    }else {
     printf("o preco esta muito caro");
    }










    return 0 ;
}