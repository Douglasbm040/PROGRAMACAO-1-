#include<stdio.h>
//! 18) Faça um programa em C que receba a altura e o sexo de uma pessoa e que calcule e
//! mostre o seu peso ideal, utilizando as seguintes fórmulas:
//! Para homens: (72.7 * h) – 58;
//! Para mulheres: (62.1 * h) – 44.7;


int main (){
   float altura, peso_ideal ;
   int sexo ;
   
   printf("digite sua altura em cm : ");
   scanf("%f",&altura);
   printf("digite o seu sexo [1] masculino ou [2] feminino : ");
   scanf("%d",&sexo);

   if (sexo == 1 ){
       peso_ideal =  (72.7 * altura )- 58 ;
       printf("o peso ideal e : %.2f",peso_ideal);

   }else if (sexo == 2 ){
       peso_ideal= (62.1 * altura )- 44.7;
       printf("o peso ideal e :  %.2f",peso_ideal);

   }else {
       printf("o sexo digita nao esta valido na opcao, digite novamente !");
   }




    return 0 ;
}