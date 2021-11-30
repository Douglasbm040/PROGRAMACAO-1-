#include <stdio.h>
#define imposto .07


int main(){
  float salario ;

  printf("digite o salario : ");
  scanf("%f",&salario);

  salario = salario - (salario * imposto);
  
  if (350 > salario && salario > 0 ){
    salario = salario + 100 ;
    printf("1 o salario final e : %.2f", salario);

  }else if ( salario > 350 && salario <=600 ){
    salario = salario + 75 ;
    printf("2 o salario final e : %.2f", salario);

  }else if (salario > 600 && salario <= 900 ){
    salario = salario + 50 ;
    printf("3 o salario final e : %.2f", salario);

  }else if (salario > 900){
    salario = salario + 35 ;
    printf("4 o salario final e : %.2f", salario);

  }else {
    printf("valor incoerrente ");
  }

    return 0 ;
}