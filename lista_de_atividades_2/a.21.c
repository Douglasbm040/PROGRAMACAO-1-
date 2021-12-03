#include <stdio.h>

void calcula_desconto(float valor ){

    if(valor < 250 && valor > 10 ){
        valor = valor - ( valor * 0.05);
        printf("o valor final e : %.2f",valor);
      
    }else if(valor >= 250 && valor < 500 ){
        valor = valor - ( valor * 0.1);
        printf("o valor final e : %.2f",valor);

    }else if(valor >= 500 ){
        valor = valor - ( valor * 0.15);
        printf("o valor final e : %.2f",valor);

    }else {
        printf("erro !");
    }

}

int main (){
    int  codigo_do_produto;
    float quantidade_do_produto,valor ;

    printf("digite o codigo do produto : ");
    scanf("%d",&codigo_do_produto);
    printf("digite a quantidade do produto : ");
    scanf("%f",&quantidade_do_produto);

    if(codigo_do_produto >= 1 && codigo_do_produto <= 10){
        valor = quantidade_do_produto * 10 ;
        printf("valor vale : %.2f",valor); 
        calcula_desconto(valor);
    }else if (codigo_do_produto >= 11 && codigo_do_produto <=20){
        valor = quantidade_do_produto * 15 ;
        printf("valor vale : %.2f",valor);
        calcula_desconto(valor); 

    }else if (codigo_do_produto >= 21 && codigo_do_produto <=30){
        valor = quantidade_do_produto * 20 ;
        printf("valor vale : %.2f",valor); 
        calcula_desconto(valor);

    }else if (codigo_do_produto >= 31 && codigo_do_produto <=40){
        valor = quantidade_do_produto * 30 ;
        printf("valor vale : %.2f",valor); 
        calcula_desconto(valor);

    }else{
        printf("produto nao encontrado ! ");
    }
    



    return 0 ;
}