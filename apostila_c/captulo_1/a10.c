#include <stdio.h>


int main(){
   float num1, num2 , num3 , resultado ;
   printf("digite o primeiro numero : ");
   scanf("%f",&num1);
   printf("digite o segundo numero : ");
   scanf("%f",&num2);
   printf("digite o terceiro numero : ");
   scanf("%f",&num3);
   resultado = (num1 + num2 + num3)/3 ;
   printf("a media dos numero e : %.3f",resultado);



    return 0;
}