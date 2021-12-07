#include<stdio.h>
//! 26) Faça um programa em C que permita o usuário entrar com três números inteiros e
//! imprima os números em ordem decrescente.





int main (){

    int num1,num2,num3,i;
    printf("digite o numero : ");
    scanf(" %d",&num1 );
    printf("digite o numero : ");
    scanf(" %d",&num2 );
    printf("digite o numero : ");
    scanf(" %d",&num3 );
    
    if (num1 <= num2 && num1<= num3){
        printf("%d ",num1);
        if(num2 <= num3){
            printf("%d ",num2);
            printf("%d ",num3);
        }else{
            printf("%d ",num3);
            printf("%d ",num2);
        }
    }else if(num2 <= num3 && num2<= num1){
        printf("%d ",num2);
        if(num1 <= num3){
            printf("%d ",num1);
            printf("%d ",num3);
        }else{
            printf("%d ",num3);
            printf("%d ",num1);
        }
    }else if(num3 <= num2 && num3<= num1) {
        printf("%d ",num3);
        if(num2 <= num1){
            printf("%d ",num2);
            printf("%d ",num1);
        }else{
            printf("%d ",num1);
            printf("%d ",num2);
        }
    }


    




    return 0 ;
}