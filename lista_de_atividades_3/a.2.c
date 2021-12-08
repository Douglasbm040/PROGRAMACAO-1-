#include <stdio.h>

void main() {
    float num, soma=0, media=0,maior,menor;
    int i;

    printf("Informe o numero: ");
    scanf("%f", &num);
    maior =  num ;
    menor = num ;

    for (i=1; i<=20; i++) {
    
     printf("Informe o numero: ");
     scanf("%f", &num);
     
     soma += num;

     if (num > maior ){
         maior=num;
     }else if (num < menor){
         menor = num ;
     }
     }
      media= soma / 20 ; 
      
      printf("A media %f , maior %f , menor %f ", media,maior,menor);
 }