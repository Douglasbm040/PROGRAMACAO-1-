#include<stdio.h>

int main(){
    int num ,par , impar, resultado  ;
    printf("digite um numero : ");    
    scanf(" %d",&num);

    resultado = num % 2 ;

    if (resultado == 0){
        par = num ;
        printf("o numero %d e par ",par);
    }else{
        impar = num ;
        printf("o numero %d e impar ", impar);
    }




    return 0 ;
}