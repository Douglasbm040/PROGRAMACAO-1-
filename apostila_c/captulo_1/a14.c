#include <stdio.h>


int main (){
 float base , altura , perimetro,area ; 
 printf("digite a base : ");
 scanf("%f",&base);
 printf("digite a altura : ");
 scanf("%f",&altura);
 area = base * altura ;
 perimetro = base * 2 + altura * 2 ;
 printf("a area do retangulo e %.2f  e o perimetro e %.2f", area, perimetro);


    return 0 ;
}