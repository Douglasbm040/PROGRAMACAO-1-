#include <stdio.h>

int main(){
  float salario, reajuste ;
  printf("digite o salario : ");
  scanf("%f",&salario);
  printf("digite o reajuste : ");
  scanf("%f",&reajuste);
  
  salario = salario + salario * (reajuste/100) ;

  printf("o salario final e : %.3f",salario);

    return 0 ;
}