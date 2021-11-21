#include<stdio.h>


int main(){
   float num1 , num2 , resultado ;
    printf("digite o primeiro numero : ");
    scanf("%f",&num1);
    printf("digite o segundo numero : ");
    scanf("%f",&num2);
    resultado = num1  - num2 ;
    printf(" %f -   %f = %.3f \n",num1,num2,resultado );
    resultado= num1  +   num2;
    printf(" %f  +  %f = %.3f \n",num1,num2,resultado );
    resultado= num1  *   num2;
    printf(" %f  *  %f = %.3f \n",num1,num2,resultado );
    resultado= num1  /   num2;
    printf(" %f  /  %f = %.3f \n",num1,num2,resultado );




return 0 ;
}
