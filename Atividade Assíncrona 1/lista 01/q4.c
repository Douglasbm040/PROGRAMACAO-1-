#include<stdio.h>
float preco_do_produto, desconto, valor_final_do_produto;

void interface(){
 printf("digite o valor do produto : ");
 scanf("%f",&preco_do_produto);
}

void calculadesconto(float preco_do_produto, float desconto){
   valor_final_do_produto= preco_do_produto-(preco_do_produto * desconto)/100 ;
   printf("o valor do produto e : %f", valor_final_do_produto);


}

void main(){
interface();
calculadesconto(preco_do_produto,10);


}