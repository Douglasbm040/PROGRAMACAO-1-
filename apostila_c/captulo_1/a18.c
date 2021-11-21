#include <stdio.h>
#define automonia 12 


int main(){
  float litros_combs, distancia ,tempo_viagem , velocidade ; 
  
  printf("digite o tempo de viagem : ");
  scanf("%f",&tempo_viagem);
  printf("digite a velocidade media : ");
  scanf("%f",&velocidade);
  distancia=tempo_viagem * velocidade ; 

  litros_combs=distancia/automonia; 


  printf("a distancia percorrida e %.2f  quantidade de litros consumida %.2f",distancia,litros_combs); 
    return 0 ;
}