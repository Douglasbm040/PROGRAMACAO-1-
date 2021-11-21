#include <stdio.h>


int main(){
  float produto, valor, desconto ;

  printf("qual o valor do produto : ");
  scanf("%f",&produto);
  printf("digite o valor do desconto : ");
  scanf("%f",&desconto);
  
  valor = produto - produto *  (desconto / 100) ;

  printf("o valor do produto e : %.2f",valor);





    return 0 ;
}