#include <stdio.h>

int main(){
  float celsus , fahrenheit ;
  printf("digite a temperatura : ");
  scanf("%f", &celsus);
  fahrenheit = ( 9 * celsus + 160 )/5 ;
  printf("a temperatura em fahrenheit e %.2f ",fahrenheit);





    return 0 ;
}